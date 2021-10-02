/* Special thanks to Jacob Sorber for his begginner C
 * videos on youtube.
 * https://www.youtube.com/watch?v=5TzFNouc0PE&list=PL9IEJIKnBJjG5H0ylFAzpzs9gSmW_eICB&index=7
 * https://www.youtube.com/watch?v=dcBcgPGIMpo&list=PL9IEJIKnBJjG5H0ylFAzpzs9gSmW_eICB&index=8
 *
 * All of the code below is attributed to him,
 * I am mearly using it for educational purposes.
 *
 * Liam Lage
 * 30/09/2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* get the length of the input string */
int get_string_length(char *str)   {
    int offset = 0;
    while (str[offset] != 0)    {       /* make sure string is NULL terminated. */
        offset++;
    }
    return offset;
}

/* copy a string to another string */
void copy_string(char *from, char *to)  {
    int offset = 0;
    while (from[offset] != 0)   {
        to[offset] = from[offset];
        offset++;
    }
    to[offset] = 0; // make sure it's NULL terminated!
}
/* The following functions are beautiful for reversing strings, all of the reversing */

void reverse0(char *str) {
    int length = get_string_length(str);
    for (int i = 0; i < length / 2; ++i) {
        // swap
        char temp = str[i];             // store a temporary copy of char at this position
        str[i] = str[length - 1 - i];   // swap char at this position with mirror char on the other side
        str[length - 1 - i] = temp;     // set that mirrored char to the temp copy
    }
}

void reverse1(char *str) {
    int length = strlen(str);
    for (int i=0, j=length-1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

/* copies the characters in reverse order from str1 to str2 */
void reverse2(const char *str1, char *str2, size_t len) {
    int i, j;
    for (i = len -1, j = 0; i >= 0; i--, j++)
        str2[j] = str1[i];
    str2[j] = '\0';
}

/* reverse string with pointers */
void reverse3(char *str) {
    char *end = str+strlen(str)-1;

    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}
/* same as reverse 3 but for loop instead of while loop */
void reverse3a(char *str) {
    for (char *end = str+strlen(str)-1; str < end; str++, end--) {
        char temp = *str;
        *str = *end;
        *end = temp;
    }
}

/* reverse with recursion
 * the function calls itself one or more times
 * to solve a problem
 */
void reverse4(char *str, int length) {
    if (length <= 1)                    /* check if the string is 0 or 1 char length */
        return;                         /* if it is return; theres nothing to do */
    char tmp = str[0];
    str[0] = str[length - 1];           /* swap characters on each end */
    str[length - 1] = tmp;
    reverse4(str + 1, length - 2);      /* move inwards and repeat */
}

char *reverse5(const char *str) {
    int length = strlen(str);
    char *result = malloc(length + 1);

    for (int i = 0; i < length; i++) {
        result[i] = str[length - 1 - i];
    }
    result[length] = 0;
    return result;
}

char *reverse6(const char *str) {
    char *result = malloc(strlen(str) + 1);

    strcpy(result, str);
    reverse3(result);
    return result;
}
 /* reverse7:
  * pick a random character in the front half of
  * the string, if it and it's mirror haven't
  * been swapped, swap them. Then pick another
  * random character and check again until the
  * right number of characters for the string
  * length have been swapped */
char *reverse7(const char *str) {
    int length = strlen(str);
    char *result = malloc(length + 1);  // Allocate space for the new string
    memset(result, 0, length);          // set all the characters in the new string to 0
    int leftToSwap = length/2;          // get the number of characters we need to swap

    while (leftToSwap) {
        int ridx = rand() % (length/2);             // get a random index between 0 and length/2
        if (result[ridx] == 0)  {                   // check if the character in that index is still 0, if it is we haven't swapped it yet, enter body
            result[ridx] = str[length - 1 - ridx];  // swap
            result[length - 1 - ridx] = str[ridx];
            leftToSwap--;                           // decrement leftToSwap until it reaches 0
        }
    }
    result[length] = 0;                             // NULL terminate the array
    return result;
}

int main(int argc, char **argv) {
    char *str1  = "Hello World! I'm string 1.";
    char str2[] = "Hello World! I'm string 2.";
    char newstring_0[500];
    char newstring_1[500];
    printf("Hello World!\n");  /* string type is defined by the double quotes */
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("Print a backslash \\ \n");
    printf("%s has length %d bytes\n", str1, get_string_length(str1));
    printf("%s has length %d bytes\n", str2, strlen(str2));
    copy_string(str1, newstring_0);
    strcpy(newstring_1, str2);
    printf("%s\n", newstring_0);
    printf("%s\n\n", newstring_1);

    reverse0(newstring_0);
    printf("r0\t%s\n", newstring_0);

    reverse1(newstring_0);
    printf("r1\t%s\n", newstring_0);

    char tmpstring[500];
    reverse2(newstring_0, tmpstring, strlen(newstring_0));
    printf("r2\t%s\n", tmpstring);

    reverse3(newstring_0);
    printf("r3\t%s\n", newstring_0);

    reverse3a(newstring_0);
    printf("r3a\t%s\n", newstring_0);

    reverse4(newstring_0, strlen(newstring_0));
    printf("r4\t%s\n", newstring_0);

    char *rev = reverse5(newstring_0);
    printf("r5\t%s\n", rev);
    free(rev);

    rev = reverse6(newstring_0);
    printf("r6\t%s\n", rev);
    free(rev);

    rev = reverse7(newstring_0);
    printf("r7\t%s\n", rev);
    free(rev);
}