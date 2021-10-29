/* Author: Liam Lage
 * 08/10/2021
 * 
 * Solution for Exercise 2-5.*/

/* Write a function squeeze(s1, s2) that delets each character
 * in s1 that matches any character in s2. */
#include <stdio.h>
#include <stdint.h>
#define LIM 1000

int32_t	usr_input(char s[], int32_t lim);
void squeeze(char s1[], char s2[]);

int32_t main (int32_t argc, char *argv[]) {
    char s1[LIM], s2[LIM];

    //prompt user & get input strings
    printf("Enter the first string:\n");
    usr_input(s1, LIM);
    printf("Enter the second string:\n");
    usr_input(s2, LIM);

    squeeze(s1, s2);
    printf("Result: %s", s1);
    return 0;
}


/* squeeze: remove chars from s1 that 
 * match chars in s2 */
void squeeze(char s1[], char s2[]) {
    int32_t i, j, k;
    for (k = 0; s2[k] != '\0'; k++) {       // iterate through s2
        for (i = j = 0; s1[i] != '\0'; i++) // iterate through s1
            if (s1[i] != s2[k])             // no match
                s1[j++] = s1[i];            // allow char, increment index
        s1[j] = '\0';                       // Null terminate
    }
}

// usr_input: get s1 & s2
int32_t usr_input(char s[], int32_t lim) {
    int32_t i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != '\0'; ++i)
        s[i] = c;
    s[i] = '\0';
    return i;
} 