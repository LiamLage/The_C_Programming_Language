/* Author: Liam Lage
 * 08/10/2021
 *
 * Solution for Exercise 2-3.
 */
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <ctype.h>

#define LIM 1000

int32_t usr_input(char s[], int32_t lim);
uint32_t htoi(char s[], int32_t len);

int main(int32_t argc, char *argv[])  {
    char line[LIM];
    int32_t len;

    while ((len = usr_input(line, LIM)) > 0) {
        printf("Hexidecimal Entered: %s\n", line);
        printf("Decimal Result:      %lld\n", htoi(line, len));
        printf("\nPress Ctrl+Z to exit.\n\n\n");
    }
    return 0;
}

int32_t usr_input(char s[], int32_t lim) {
    int32_t c, i;

    printf("Enter a Hexidecimal number with the suffix 0x or 0X (optional):\n");    // prompt user
    for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    s[i] = '\0';
    return i - 1;   // return length of s[] - '\0'
}

// Hexadecimal to Integer
uint32_t htoi(char s[], int32_t len) {
    int32_t i, c, n;
    long long decimal;
    n = decimal = 0;
    for (i = 0; s[i] != '\0'; ++i) {
        c = s[i];
        // Allow optional 0x or 0X suffix
        if (i == 0 && c == '0' && (s[1] == 'x' || s[1] == 'X')) { 
            len -= 2;
            i = 1;
            continue;
        }
        /* Find decimal representation of hexidecimal 
         * (an ASCII chart is useful to visualize this) */
        if (isdigit(c))
            n = c - '0';        // '0' = Dec 48 ASCII
        else if (islower(c))
            n = c - 'a' + 10;   // 'a' = Dec 97 ASCII
        else if (isupper(c))
            n = c - 'A' + 10;   // 'A' = Dec 65 ASCII  
        
        decimal += n * pow(16, len); 
        len--;
    }
    return decimal;   
}
    