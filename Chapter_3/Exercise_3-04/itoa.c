/* Author: Liam Lage
 * 29/10/2021
 *
 * Solution for Exercise 3-4.
 * 
 * In a two's complement number representation, our version of itoa does not
 * handle the largest negative number, that is, the value of 'n' equal to
 * -(2 ^ wordsize-1). Explain why not. Modify it to print that value correctly,
 * regardless of the machine on which it runs.
 * 
 * The original itoa fails at 'n = -n;' with n = -2147483648, because the
 * maximum value of an integer is 2147483647.
 * 
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#define LIM 1000


void itoa(int n, char s[]);
void reverse(char s[]);
void signed_range(int bytes);

int main(int argc, char *argv[]) {
    int num;
    char str[LIM];

    for (int i = 0; i < LIM - 1; i++)
        str[i] = '\0';

    // num = -2147483647;
    num = -2147483648;      // largest negative int

    // find the largest negative integer, regardless of architecture
    printf("Range of int by computation:\n");
    signed_range(sizeof(int));
    printf("Largest negative int as defined in limits.h: %d\n\n\n", INT_MIN);

    itoa(num, str);

    printf("itoa result:\n%s\n", str);

    return 0;
}


// itoa: converts n to characters in s
void itoa(int n, char s[]) {
    int i, sign, rem;
    sign = n;                               // record sign
    i = 0;

    do {                                    // generate digits in reverse order
        rem = n % 10;
        s[i++] = ((sign > 0) ? rem : -(rem)) + '0'; // if rem is negative, double negative will make it positive -(-rem)
    }
    while ((n /= 10) != 0);                 // delete it from n
    if (sign < 0)                           // if sign is negative, append '-' to the end of the s
        s[i++] = '-';
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


// compute range of data type
void signed_range(int bytes) {
    int bits = bytes * 8;
    long long from = (pow(2, (bits - 1)));
    long long to   = (pow(2, (bits - 1)) * (-1));

    printf("%lld to %lld\n", to, from);
}

/*
// Original itoa for reference:
void itoa(int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0)     // record sign
        n = -n;             // make n positive
    i = 0;
    do {                        // generate digits in reverse order
        s[i++] = n % 10 + '0';  // get next digit
    }
    while ((n /= 10) > 0);      // delete it
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';                 // NULL terminate
    printf("itoa result:");
    reverse(s);
}
*/