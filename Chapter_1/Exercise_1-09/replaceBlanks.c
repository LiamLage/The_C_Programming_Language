/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-09.
 */
#include <stdio.h>

int main(void)  {
    int c, isBlank;
    isBlank = 0;
    printf("%s\n", "Enter characters, when complete press Return"); /* User prompt */
    while ((c = getchar()) != EOF)  {
        if (c == ' ')   {
            if (!isBlank)   {
                isBlank = 1;
                putchar(c);
            }
        } else {
            isBlank = 0;
            putchar(c);
        }
    }
    return 0;
}