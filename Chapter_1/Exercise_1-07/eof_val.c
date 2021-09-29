/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-7.
 */

#include <stdio.h>

/* Copy input to output and determine
 * value of EOF 
 * press Ctrl^Z + enter to send EOF  */

int main()  {
    int e, c, EOF_val;
    
    while ((c = getchar()) != EOF)  {
        putchar(c);
    }
    e = (getchar() != EOF);
    EOF_val = EOF;
    //printf("%s\n", "Value of getchar() != EOF: ");
    //printf("%d\n", e);
    printf("%s\n","The value of EOF: ");
    printf("%d\n", EOF_val);
}