/* Author: Liam Lage
 * 29/10/2021
 * 
 * Solution for Exercise 3-3.
 * 
 * Write a function expand(s1,s2) that expands the shorthand notations
 * like 'a-z' in the string s1 into the equivalent complete list
 * abc ... xyz in s2. Allow for letters of either case and digits, and
 * be prepared to handle cases like 'a-b-c' and 'a-z0-9' amd '-a-z'.
 * Arrange that a leading or trailing '-' is taken literally.
 */
#include <stdio.h>
#define LIM 1000

void expand(char s1[], char s2[]);
int usr_input(char s[], int lim);


int main(int argc, char *argv[]) {
    char s1[LIM], s2[LIM];
    for (int i = 0; i < LIM; i++) {
        s1[i] = 0;
        s2[i] = 0;
    }

    usr_input(s1, LIM);

    expand(s1, s2);

    printf("%s\n", s2);

    return 0;
}


/* expand operation:
 * check that the current char is not a NULL char, then increment to the next char
 * if this char is '-' and the following char is greater than the starting char
 * step over the '-'
 * While starting char is less than end char
 * put the following char in s2 */

void expand(char s1[], char s2[])
{
    int i, j, c;

    i = j = 0;

    while((c = s1[i++]) != '\0')
        if(s1[i] == '-' && s1[i+1] >= c) {
            i++;
            while(c < s1[i])
            s2[j++] = c++;
        }
        else
            s2[j++] = c;

    s2[j] = '\0';
}


int usr_input(char s[], int lim) {
    int i, c;

    printf("Enter shorthand to be expanded, press 'Enter' once complete:\n"); // prompt user
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    s[i] = '\0';
}