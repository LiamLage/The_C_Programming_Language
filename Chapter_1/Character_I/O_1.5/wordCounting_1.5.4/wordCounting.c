/*  28/09/2021  
 *  The following program counts lines, words,
 *  characters and digits, with the loose 
 *  definition that a word is any sequence of 
 *  characters that does not contain a blank, 
 *  tab, digit or newline.
 */

#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, characters and digits in input */

int main()
{
    printf("%s", "Enter sentence: ");
    int c, nl, nw, nc, d, state;

    state = OUT;
    nl = nw = nc = d = 0;

    while ((c = getchar()) != EOF)    {
        ++nc;
        if (c == '\n')  {
            ++nl;
        }
        if (c >= '0' && c <= '9')   {
            ++d;
        }
        if (c == ' ' || c == '\n' || c == '\t' || (c >= '0' && c <= '9')) {
            state = OUT;
        }
        else if (state == OUT)  {
            state = IN;
            ++nw;
        }
    }
    printf("%s\t%3d\n%s\t\t%3d\n%s\t%3d\n%s\t\t%3d\n", "Newlines: ", nl, "Words:", nw, "Characters:", nc, "Digits:", d);   
    return(0);
}