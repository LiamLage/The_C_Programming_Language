/*  Author: Liam Lage
 *  30/09/2021
 *  Section 1.9 - Character arrays
 */

/* print the longest line
 * main and getline communicate through a pair of args and a returned value.
 * In getline, the args are declared by the line*/

#include <stdio.h>
#define MAXLINE 1000    /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);      

/* print the longest line */
int main()  {
    int len;                /* current line length */
    int max;                /* maximum length encountered so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line is saved here */
    max = 0;
    printf("Enter lines, ones complete press Ctrl+Z, the longest line will be returned\n");
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {           /* max length so far*/
            max = len;             
            copy(longest, line);    /* copy from longest to line */
        }
    }
    if (max > 0) {
        printf("The longest line is:\n");
        printf("%s\n", longest);
        printf("It has %d characters.\n", max);
    }
        
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)  {   /* specifies that the 1st arg, s, is an array, and the 2nd, lim, is an int 
                                     * no length is specified for s; it is set in main */
    int c, i;

    for (i = 0; i < (lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
        s[i] = c;
    if (c == '\n')  {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';    /* put char '\0' at the end of the array to terminate the string of characters */
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}