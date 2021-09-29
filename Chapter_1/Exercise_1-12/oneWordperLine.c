/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-12.
 */
#include <stdio.h>

/* print input one word per line */

int main(void)  {
    int c;
    printf("%s\n", "Enter characters, once complete press enter");

    while ((c = getchar()) != EOF)  {
        printf("%c", c);
        if (c == ' ' || c == '\t' || c == '\n')  {
            printf("\n");
        }
    }
    return 0;
}
