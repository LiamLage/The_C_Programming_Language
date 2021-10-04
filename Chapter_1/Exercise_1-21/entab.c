/* Liam Lage
 * 04/10/2021
 *
 * Solution for Exercise 1-21.
 */

#include <stdio.h>
#define MAX_SIZE 1000
#define TAB_SIZE 8

char s1[MAX_SIZE];
char s2[MAX_SIZE];

int get_input(void);
void entab(void);

int main(void)  {
    extern char s2[];

    printf("%s\n", "Enter a string:");  // pompt user
    while (get_input() == 0)            // if theres no input do nothing
        ;
    entab();
    printf("%s\n%s\n", "entab result:", s2);    // print formatted result

    return 0;
}

// get user input
int get_input(void) {
    int i, j, c;
    extern char s1[];

    for (i = 0, j = 0; (c = getchar()) != '\0' && c != '\n'; ++i)
        if (i < MAX_SIZE - 1)
            s1[j++] = c;
    s1[j] = '\0';   // NULL terminate
    return j;
}

// copy s1[] into s2[] and replace successive blanks
// with the minimum number of tabs and blanks to
// achieve the same spacing.
void entab(void) {
    int c, i, j, x, w, nblank;
    int sufficient_blanks;
    extern char s1[];
    extern char s2[];

    w = TAB_SIZE;
    i = 0;
    x = 0;

    while ((c = s1[i]) != '\0')   {
        if (c == ' ') {                         // iterate through s1 unil a blank is found
            sufficient_blanks = 1;              // set the sufficient_blank flag high
            nblank = w - (i % w);               // find the difference between tab width and the number of spaces
            for (j = 1; j < nblank; ++j)
                if (s1[i + j] != ' ') {         // if the next character isn't also a blank, enter, else if it is, iterate through for
                    sufficient_blanks = 0;
                    break;
                }
            if (sufficient_blanks)  {           // if there were enough blanks to make a tab
                s2[x++] = '\t';                 // insert a tab into s2 and increment x
                i += nblank - 1;                // move s1 index to next word
            } else {
                s2[x++] = c;                    // if !sufficient_blanks, copy c into s2 and increment x
            }
        } else {
            s2[x++] = c;                        // if c was not ' ', then copy c into s2 and increment x
        }
        ++i;
    }
    s2[x] = '\0';                               // NULL terminate
}