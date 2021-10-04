/*
 *
 */

#include <stdio.h>
#define MAX_SIZE 1000
#define TAB_SIZE 4

int usr_input(char s[]);
int str_len(char s[]);
void copy_str(char from[], char to[]);
void reverse(char s1[]);

int main(void)  {
    char s0[MAX_SIZE];
    char s1[MAX_SIZE];
    char s2[MAX_SIZE];
    int len;

    printf("Enter characters, once complete press Ctrl+Z:\n");
    while (len = (usr_input(s0)) != 0)  {
        copy_str(s0, s1);
        printf("copied string: '%s'\n", s1);
        reverse(s1);
        printf("%s\n", s1);

    }

}

// get user input
int usr_input(char s[]) {
    int c, i;
    for (i = 0; (c = getchar()) != EOF; ++i)
        s[i] = c;
    s[i] = '\0';

    return i;
}

// get string length
int str_len(char s[])   {
    int offset;
    while ((s[offset]) != 0)
        offset++;
    return offset;
}

// copy a string 
void copy_str(char from[], char to[])   {
    int i;

    while ((from[i]) != 0)  {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';   // NULL terminate
}

// reverse a string
void reverse(char s1[]) {
    int len = str_len(s1);
    int c, i;
    for (i = 0; i < len/2; i++) {
        char temp = s1[i];
        s1[i] = s1[len - 1 - i];
        s1[len - 1 - i] = temp;  
    }
}