/* Liam Lage
 * 04/10/2021
 *
 * Solution for Exercise 1-20.
 */

#include <stdio.h>
#define MAX_SIZE 1000
#define TAB_SIZE 4

// Global var declaration
char s1[MAX_SIZE];  // input line
char s2[MAX_SIZE];  // detab line

int usr_input();
void detab();

int main(void)  {
    extern char s1[MAX_SIZE];  // input line
    extern char s2[MAX_SIZE];  // detab line

    printf("Enter characters, tabs will be replaced by equivelent number of blank spaces:\n");  // prompt user
    while (usr_input(s1, MAX_SIZE) == 0)
        ;
    detab(s1, s2, TAB_SIZE);
    printf("%s\n%s\n", "detab result:", s2);    // print result

    return 0;
}

// get user input, put input into array s0[]
// and return input length
int usr_input() {
    int c, i, j;
    extern char s1[];

    for (i = 0, j = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < MAX_SIZE - 1)
            s1[j++] = c;
    s1[j] = '\0';
    return j;
}

// copy s1[] into s2[] and replace \t with
// equivelent number of blank spaces.
void detab() {
    int c, i, j, x, w, nblanks;
    extern char s1[];
    extern char s2[];

    i = 0;
    x = 0;
    w = TAB_SIZE;
    while ((c = s1[i++]) != '\0')   {
        if (c == '\t')  {
            nblanks = w - (x % w);      // find the remainder, if any; space(s) succeeding \t 
            for (j = 0; j < nblanks; ++j)
                s2[x++] = ' ';
        } else  {
            s2[x++] = c;
        }
    }
    s2[x] = '\0';   // NULL terminate
}