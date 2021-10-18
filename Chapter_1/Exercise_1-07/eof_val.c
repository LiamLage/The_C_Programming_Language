/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-7.
 */

#include <stdio.h>

/* Copy input to output and determine
 * value of EOF 
 * press Ctrl^Z + enter to send EOF  */

int main(int argc, char *argv[])  {
    int c;

    printf("\n%s\n", "Please enter characters, press Ctrl Z or Ctrl D when complete:"); // prompt user    
    while ((c = getchar()) != EOF)  {
        printf("%d ", c != EOF);
        putchar(c);
    }
    printf("\n%d\n", c != EOF);
    return 0;
}