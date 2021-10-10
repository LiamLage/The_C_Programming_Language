/* Author: Liam Lage
 * 07/10/2021
 *
 * Solution for Exercise 2-2.
 */
#include <stdio.h>
#include <stdint.h>
#define MAX_SIZE 1000

 /* for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
  *     s[i] = c;
  * write a loop equivalent to the for loop above without using && or ||. */

    /* before reading a new character it is necesary to check
     * that there is room to store it in the array s[], so the
     * test i < LIM - 1 must be done first. If this test fails
     * we must not go on to read another character, similarly
     * the call and assignment of c must occur before it is
     * tested against EOF. */

 int main(void) {
     int32_t c, i, lim;
     char s[MAX_SIZE];
     i = 0;

     printf("Enter a string, then press Enter to proceed:\n");  // prompt user
     while (i < MAX_SIZE - 1) {
        if ((c = getchar()) == '\n')
                break;
        else if (c == EOF)
                break;
        else
                s[i++] = c;
     }
     s[i] = '\0';   // NULL terminate

     printf("\n%s\n%s\n", "Result:", s);    // print string s[]

     return 0;
 }