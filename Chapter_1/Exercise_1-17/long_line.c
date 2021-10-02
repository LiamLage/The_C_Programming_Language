/*  Author: Liam Lage
 *  01/10/2021
 *  Solution to Exercise 1-17
 */

#include <stdio.h>
#define MAXLINE  1000    /* maximum input line length */
#define LONGLINE 40      /* lines with more than 40 characters */

int getline(char line[], int maxline);
void copy(char to[], char from[]);      

/* print the longest line */
int main()  {
    int len;                /* current line length */
    int max;                /* maximum length encountered so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line is saved here */
    max = 0;
    printf("Enter characters, ones complete press Ctrl+Z, if the line is > 40 characters it will be returned\n");
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > LONGLINE) {           /* if line longer than 40 characters, print the line */
                printf("%s\n", line);
        }
    }   
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)  {   /* specifies that the 1st arg, s, is an array, and the 2nd, lim, is an int 
                                     * no length is specified for s; it is set in main */
    int c, i, j;

    for (i = 0; i < (lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
        if (j < lim - 1)
                s[j++] = c;
    if (c == '\n' && j < lim -1)
        s[j++] = c;
    s[i] = '\0';    /* put char '\0' at the end of the array to terminate the string of characters */
    return i;
}
