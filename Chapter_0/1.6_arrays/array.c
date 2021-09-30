/*  Author: Liam Lage
 *  30/09/2021
 *  Solutions for Exercise -.
 */
#include <stdio.h>

/* count digits, whitespaces, others */

int main(void)  {
    int c, i, nwhite, nother;
    int ndigit[10];             /* ndigit is an array of 10 integers */

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)    {
        ndigit[i] = 0;
    }
        
    printf("Enter characters, then press Ctrl+Z\n");
    
    while ((c = getchar()) != EOF)  {
        if (c >= '0' && c <= '9')   {
                ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')    {
            ++nwhite;
        }
        else    {
            ++nother;
        }
    }
    printf("\t\t%s\n", "  0123456789");
    printf("digits\t\t= ");
    for (i = 0; i < 10; ++i)
        printf("%d", ndigit[i]);
    printf("\nwhite space\t= %d\nother\t\t= %d\n", 
        nwhite, nother);
    return 0;
}