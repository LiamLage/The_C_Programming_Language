/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-11.
 */
#include <stdio.h>

#define IN  1
#define OUT 0
/* count lines, words, digits and characters in input */

int main(void)  {
    int c, nLine, nWord, nDigit, nChar, state;  /* counter variables */
    nLine = nWord = nDigit = nChar = 0;         /* initialize all counters to 0 */    
    state = OUT;                                /* initialize state to OUT */
    printf("%s\n", "Enter characters, when complete press Ctrl+Z"); /* User prompt */

    while ((c = getchar()) != EOF)  {
        ++nChar;                                                    /* increment nChar = nChar + 1 */
        if (c == '\n')
            ++nLine;                                                /* increment nLine */
        if (c >= '0' && c <= '9')
            ++nDigit;                                               /* increment nDigit */
        if (c == ' ' || c == '\n' || c == '\t' || (c >= '0' && c <= '9'))  
            state = OUT;                                            
        else if (state == OUT)  {                                   /* outside word*/
            state = IN;                                             /* inside word */
            ++nWord;                                                /* increment nWord */
        }    
    }
    printf("%s\t\t%3d\n%s\t\t%3d\n%s\t\t%3d\n%s\t%3d\n",\
        "Lines:", nLine, "Words:", nWord, "Digits:", nDigit, "Characters:", nChar); /* print headings and counts */
}