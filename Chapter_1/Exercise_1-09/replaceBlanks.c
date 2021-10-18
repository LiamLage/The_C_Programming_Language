/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-09. */
#include <stdio.h>

/*  copy input to output, replacing each  
 *  sequence of one or more blanks with
 *  a single blank. */

int main(int argc, char *argv[]) {
    int c, blank_rx;
    blank_rx = 0;
    printf("%s\n", "Enter characters, when complete press Return"); // User prompt
    while ((c = getchar()) != EOF) {
        if (c == ' ') {    
            if (!blank_rx) {
                blank_rx = 1;    // blank_rx flag HIGH
                putchar(c);      // print one ' '
            }
        } else {
            blank_rx = 0;        // blank_rx flag LOW
            putchar(c);
        }
    }
    return 0;
}

/* Explanation: 
 * if the received char is a ' ', print it and set the
 * blank received flag high, if the flag is already high,
 * skip the character, thus only one blank space will be 
 * printed. */