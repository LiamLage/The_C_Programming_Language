/* Author: Liam Lage
 * 30/10/2021
 * 
 * Solution for Exercise 3-5.
 * 
 * Write the function itob(n,s,b) that converts the integer n into a base b
 * character representation in the string s. In particular, itob(n,s,16)
 * formats s as a hexadecimal integer in s.
 */
#include <stdio.h>
#include <string.h>
#define LIM 1000

void itob(int num, char s[], int base);
void reverse(char s[]);

int main(int argc, char *argv[]) {
    int num, base;
    char str[LIM];

    num = 15;
    base = 16;

    itob(num, str, base);

    printf("Result:\n%s\n", str);

    return 0;
}

void itob(int n, char s[], int b) {
    int i, j, sign;

    if ((n = sign) < 0)
        n = -n;
    
    i = 0;

    do {
        j = n % b;
    }
    while ((n / b) > 0);

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';

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