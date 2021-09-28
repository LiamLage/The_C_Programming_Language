/* Replace  each occurence of a character by another character*/

#include <stdio.h>

int main()  {
    int i;
    int ni[j] = 
    int ws = ' ';
    

    printf("%s\0", "Enter a string with one or more whitespaces: ");

    while ((i = getchar()) != EOF)
    {
        ++ni;
        if (i > ws || i == '\t') {
            i = ws;
        }
        else    {
            putchar(i);
        }
    }
    return(0);
}