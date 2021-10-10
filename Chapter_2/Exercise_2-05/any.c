/* Author: Liam Lage
 * 08/10/2021
 *
 * Solution for Exercise 2-4. */

#include <stdio.h>
#include <stdint.h>
#define LIM 1000

int32_t	usr_input(char s[], int lim);
int32_t any(char s1[], char s2[], char s3[]);

int32_t main (int32_t *argc, char **argv) {
    char c, s1[LIM], s2[LIM], s3[LIM];

    printf("Enter the first string:\n");
    usr_input(s1, LIM);
    printf("Enter the second string:\n");
    usr_input(s2, LIM);
    printf("\nPosition: s1[%i]\nLetter:   %s\n", any(s1, s2, s3), s3);
}

// usr_input: get s1 & s2
int32_t usr_input(char s[], int32_t lim) {
    int32_t i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != '\0'; ++i)
        s[i] = c;
    s[i] = '\0';
    return i;
} 
/* any: return the position and value of the first
 * char in s1 that matches any char in s2. */
int32_t any(char s1[], char s2[], char s3[]) {
    int32_t i, j;
    for (j = 0; s2[j] != '\0'; j++)
        for (i = 0; s1[i] != '\0'; i++)
            if (s1[i] == s2[j]) {
                s3[0] = s1[i];
                s3[1] = '\0';
                return i;
            }
}
