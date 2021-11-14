/* Author: Liam Lage
 * 14/11/2021
 * 
 * Solution to Exercise 4-1.
 * 
 * Write the function strindex(s,t) which returns the position of
 * the rightmost occurrence of t in s, or -1 od there is none. 
 */
#include <stdio.h>
#include <string.h>
#define LIM 1000


int getline(char [], int);
int strindex(char [], const char []);


// find rightmost occurrence of pattern in s
int main(int argc, char *argv[]) {
    char line[LIM];
    const char pattern[] = "ould";  // pattern to search for
    int pos;

    for (int i = 0; i < LIM; i++)
        line[i] = '\0';
    
    printf("Enter a line, press 'Enter' to progress.\n");   // user prompt
    while (getline(line, LIM) > 0)
        if ((pos = strindex(line, pattern)) < 0)
            printf("Not found!\n");
        else
            printf("%d\nResult: %s", pos, line);
    return 0;
}


// getline: get line into s, return length
int getline(char s[], int lim) {
    int i, c;
    i = 0;

    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';    // null terminate
    return i;
}


// strindex: return index of rightmost t in s, -1 if none.
int strindex(char s[], const char t[]) {
    int i, j, k;

    for (i = strlen(s) - strlen(t); i >= 0; --i) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}