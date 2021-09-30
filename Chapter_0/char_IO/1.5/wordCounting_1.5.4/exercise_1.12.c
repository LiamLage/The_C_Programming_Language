/*  This program aims to print its 
 *  input one word per line.
 */
#include <stdio.h>
#define IN  1
#define OUT 0

int main() 
{
    int i, ni;
    ni = 0;

    printf("%s\0", "Enter Sentence: ");

    while ((i = getchar()) != EOF)
    {
        ++ni;
        if (i == '\t' || i == ' ')   {
            printf("\n");
        }
        else    {
            putchar(i);
        }
    }
    return(0);
}