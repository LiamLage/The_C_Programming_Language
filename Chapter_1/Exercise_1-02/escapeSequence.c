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
    // escape sequences
    printf("\n%s%11s%15s\n", "Description", "Symbol", "Demonstration");                     // Table Heading
    printf("Alert:           \\a\t\"The alert icon: \a.\"\n");                              // \a for Alert
    printf("Horizontal Tab:  \\t\t\"There is a '\\t' between this\tand that.\"\n");         // \t for Horizontal Tab
    printf("Backspace:       \\b\t\"The last letter of program\b is backspaced.\"\n");      // \b for Backspace
    printf("backslash:       \\\\\t\"Path is c:\\Users\\admin\\C\"\n");                     // \\ for Backslash
    printf("Single quote:    \\'\t\"Single quotes as in \'A\'.\"\n");                       // \' for Single quote
    printf("Double quote:    \\\"\t\"Double quotes around all of the above strings.\"\n");  // \" for Double quote
    printf("Carriage return: \\r\t\"There is a carriage return here\n\r continue...\"\n");  // \r for Carriage return
    printf("Vertical Tab:    \\v\t\"There is a '\\v' between this\vand that\"\n");          // \v for Vertical Tab
    printf("Question Mark:   \\?\t\"Is there a question mark at the end\?\"\n");            // \? for Question mark
    printf("Octal Number:    \\000\t\"This is an octal number: \065.\"\n");                 // \000 for Octal number
    printf("Hexidecimal:     \\xhh\t\"This is a hexidecimal number: \x35.\"\n");            // \xhh for Hexidecimal numbers
    printf("NULL Character:   \\0\t\"Represents NULL or the end of a char array: \0.\"\n"); // \0 for the NULL character
    printf("\n");
    return 0;
}