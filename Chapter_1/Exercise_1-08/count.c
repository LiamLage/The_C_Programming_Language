/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-08.
 */

#include <stdio.h>

/* Count blanks, tabs and newlines in
 * an input string */ 

int main()  {
    int c, nBlanks, nTabs, nLines;
    nBlanks = nTabs = nLines = 0;       /* Initialize counter values to 0 */
    
    printf("%s\n", "Enter characters, when complete input Ctrl+Z "); /* User prompt */

    while ((c = getchar()) != EOF)  {   /* while end-of-file is not recieved */
        if (c == ' ')   {               /* c is blank */
            ++nBlanks;                  /* increment nBlanks; nBlanks = nBlanks + 1 */
        }
        else if (c == '\t')  {          /* c is a 'Tab' */
            ++nTabs;                    /* increment nTabs*/
        }
        else if (c == '\n') {           /* c is a newline */
            ++nLines;                   /* increment nLines */
        }
    }
    printf("%s%d\n%s%d\n%s%d\n%s%d\n", "Blanks: ", nBlanks, "Tabs: ", nTabs, "New Lines: ", nLines);      /* print Blanks, Tabs & Newlines */
    return 0;
}