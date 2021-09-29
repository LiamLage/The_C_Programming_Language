/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-10.
 */
#include <stdio.h>

int main(void)  {
    int c;
    printf("%s\n", "Enter characters, when complete press Return"); /* User prompt */

    while ((c = getchar()) != EOF)  {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            printf("%c", c);
    }
    return 0;
}