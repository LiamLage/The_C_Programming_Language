/* Author: Liam Lage
 * 12/11/2021
 * 
 * Solution for Exercise 3-6.
 * 
 * Write a version of itoa that accepts three arguments instead of two. The third
 * argument is a minimum field width; the converted number must be padded with
 * blanks on the left if necessary to make it wide enough.
 */
#include <stdio.h>
#include <string.h>
#define LIM 1000

void itoa(int n, char s[], int w);
void reverse(char s[]);

int main(int argc, char *argv[]) {
    char str[LIM];
    int number, width;
    for (int i = 0; i < LIM - 1; i++)
        str[i] = '\0';
    
    number = -468974;
    width  = 10;

    itoa(number, str , width);

    printf("%s\n", str);

    return 0;
}


// itoa: converts n to characters in s
void itoa(int n, char s[], int w) {
    int i, sign;

    if ((sign = n) < 0)
        n = -n;
    i = 0;

    do {                                    // generate digits in reverse order
        s[i++] = (n % 10) + '0';
    }
    while ((n /= 10) > 0);                  // delete it from n

    if (sign < 0)                           // if sign is negative, append '-' to the end of the s
        s[i++] = '-';
    while (i < w)
        s[i++] = ' ';
    
    s[i] = '\0';                            // NULL terminate
    
    reverse(s);
}


// reverse: reverses string s in place
void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}