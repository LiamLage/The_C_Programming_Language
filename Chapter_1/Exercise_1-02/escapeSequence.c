/*  Author: Liam Lage
 *  28/09/2021
 *  Solutions for Exercise 1-2.
 *  A more in depth solution can be found at C\Chapter_0\printf.
 */
#include <stdio.h>
/* print the various escape sequences accompanied by a
 * string in which the escape sequence is demonstrated. 
 */
int main()  {
    printf("Evaluate result of printf arg \\c where \\c is not a valid arg\n");          /* result is compiler error "unknown
                                                                                          * escape sequence: '\c'" */
    printf("\n%s%11s%15s\n", "Description", "Symbol", "Demonstration");                    /* Table Heading */
    printf("Tab:            \\t\t\"There is a '\\t' between this\tand that\"\n");        /* \t for Tab*/
    printf("Backspace:      \\b\t\"The last letter of program\b is backspaced\"\n");     /* \b for Backspace */
    printf("backslash:      \\\\\t\"Path is c:\\Users\\admin\\C\"\n");                   /* \\ for Backslash */
    printf("Single quote:   \\'\t\"Single quotes as in \'A\'\"\n");                      /* \' for Single quote */
    printf("Double quote:   \\\"\t\"Double quotes around all of the above strings\"\n"); /* \" for Double quote */
    return 0;
}