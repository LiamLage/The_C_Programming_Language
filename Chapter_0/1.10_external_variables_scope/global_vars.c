/* Liam Lage
 * 04/10/2021
 *
 * Section 1.10 - External Variables & Scope
 */

/* External or Global variables are external to all functions and can be accessed by any
 * function by name, they retain their values even after the functions that set them have
 * returned. They are an alternative to local variables declared inside each function.
 * A global variable must be defined exactly once outside of any function, this sets aside
 * memory for it. The variable must also be declared in each function that wants access to 
 * it; this states the type and name of var to be accessed. The declaraction may be an
 * explicit extern statement or may be implicit from context.
 */
#include <stdio.h>
#define MAX_SIZE 1000

int max;                // max length seen so far
char line[MAX_SIZE];    // current input line
char longest[MAX_SIZE]; // longest line

int getline(void);
void copy(void);

// print longest input line; line, longest & max as external variables
int main(void)  {
    int len;
    // explicit declaration of global variables to be accessed
    extern int max;
    extern char longest[];

    max = 0;
    printf("Enter lines, the longest line will be returned:\n");    // prompt usr
    while ((len = getline()) != 0)  {   // there was a line
        if (len > max)  {
            max = len;
            copy();
        }
    }
    if (max > 0)
        printf("%s\n\"%s\"\n", "The longest line is:", longest);
    return 0;
}

// getline: returns length; line[] is a global/external var
int getline(void)   {
    int c, i, j;
    extern char line[];

    for (i = 0, j = 0; i < MAX_SIZE - 1 && (c=getchar()) != EOF && c != '\n'; ++i)  {
        if (i < MAX_SIZE - 1)
            line[j++] = c;
    }
    if (c == '\n')  {
        if (i < MAX_SIZE - 1)
            line[j++] = c;
        ++i;
    }
    line[j] = '\0';  // NULL terminate the array
    return i;
}

// copy: line into longest; line[] & longest[] are global
void copy(void) {
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}