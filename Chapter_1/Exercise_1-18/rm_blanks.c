/* Author: Liam Lage
 * 03/10/2021
 * Solution to Exercise 1-18.
 */
#include <stdio.h>
#define MAX_SIZE 1000    // maximum string length

void trim_trailing(char str[], int lim);

// I managed to remove trailing blanks
// and newlines but I haven't figured 
// out how to entirely remove blank
// lines, 
int main(int argc, char **argv) {
    int c;
    char str[MAX_SIZE]; // current input line

    printf("Enter a string, then press Ctrl+Z: \n");    // prompt user
    for (int i = 0; (c = getchar()) != EOF; ++i) {  	// get user input
        str[i] = c;
    }
    printf("\nOriginal string, no trimming: \n\"%s\"", str);    // print entered string before trimming
    trim_trailing(str, MAX_SIZE);
    printf("\n\nTrimmed string: \n\"%s\"", str);                // print trimmed string
    return 0;
}


/* iterate through the input and find the last 
 * char that is not a white space or newline,
 * then end array at that point
 */
void trim_trailing(char str[], int lim)   {
    int index, i;
    index = -1;     // default index
    i = 0;

    // find last character thats not a whitespace
    while (str[i] != '\0')  {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\r')  {
            if (i < lim - 1)
                index = i;
        }
        ++i;
    }
    str[index + 1] = '\0';  // NULL terminate the string
}
