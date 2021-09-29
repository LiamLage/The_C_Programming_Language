/*  Author: Liam Lage
 *  29/09/2021
 *  Solutions for Exercise 1-09.
 */
#include <stdio.h>

/*  copy input to output, replacing each  
 *  sequence of one or more blanks with
 *  a single blank.
 * 
 *  basic operation:
 *  itterate through each character of the input 
 *  test if the character is a blank
 *      if the character is a blank, enter the 
 *      function_if(), if its not a blank, goto
 *      function_else()
 *      
 *      function_if()
 *  	if blank flag HIGH, goto function_else()
 *      if blank flag LOW, set blank flag HIGH, 
 *      print a blank.
 * 
 *      function else()
 *      set blank flag LOW
 *      print the character
 *      
 */

int main(void)  {
    int c, blank_rx;
    blank_rx = 0;
    printf("%s\n", "Enter characters, when complete press Return"); /* User prompt */
    while ((c = getchar()) != EOF)  {
        if (c == ' ')   {        /* if its a ' ' enter body, if not; jump to else */
            if (!blank_rx)   {   /* if blank_rx == 0 (blank_rx flag LOW), enter body.
                                  * '!' operator reverses the logical state of blank_rx */  
                blank_rx = 1;    /* blank_rx flag HIGH */
                putchar(c);      /* print one ' ' */
            }
        } else {
            blank_rx = 0;       /*  blank_rx flag LOW */
            putchar(c);
        }
    }
    return 0;
}