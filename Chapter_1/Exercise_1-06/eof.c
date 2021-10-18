/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-6.
 */

#include <stdio.h>
#include <stdint.h>
/* Copy input to output and verify that the
 * expression c = getchar() != EOF is 0 or 1. 
 * press Ctrl^Z + enter to send EOF  */

int32_t main(int32_t argc, char **argv)  {
    int32_t c;
    
    while ((c = getchar()) != EOF)  {
        printf("%d ", c != EOF);
        putchar(c);
    }
    printf("\n%d\n", c != EOF);
    return 0;
}