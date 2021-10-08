/* Author: Liam Lage
 * 05/10/2021
 *
 * Solution for Exercise 1-22
 * doesn't work correctly, maybe I'll come back to it
 */
#include <stdio.h>
#define MAX_SIZE 1000
#define LINE_WIDTH 15   // max line width
#define TAB_WIDTH 4     // spaces that constitute a tab
#define IN  1
#define OUT 0

int usr_input(char s[], int max_size);
void fold(char s0[], char s1[], int linewidth, int ntab);

int main(int *argc, char **argv[]) {
    char s0[MAX_SIZE];                              // input string
    char s1[MAX_SIZE];                              // folded string

    printf("Enter characters, then press Ctrl+Z\n");  // prompt user
    while (usr_input(s0, MAX_SIZE) == 0)            // populate s0, if there is no input, do nothing
        ;

    fold(s0, s1, LINE_WIDTH, TAB_WIDTH);
    printf("\n\nResult:\n%s\n", s1);

    return 0;
}

// usr_input: save input into s[], return length
int usr_input(char s[], int lim) {
    int c, i, j;
    for (i = 0, j = 0; (c = getchar()) != EOF; ++i)
        if (i < lim - 1)
            s[j++] = c;
    s[j] == '\0';
    return j;
}

// fold long input lines into two or more shorter
// lines after the last non-blank char that occurs
// before the n-th line length
void fold(char s0[], char s1[], int nline, int ntab) {
    int i, j, c, width, state;

    i = j = width = 0;
    state = OUT;
    while ((c = s0[i]) != '\0') {
        if (c == ' ' || c == '\n' || c == '\t' || (c >= '0' && c <= '9'))
            state = OUT;
        else if (state == OUT)                          /* outside word*/
            state = IN;
        if (c == ' ') {
            if (width + 1 == nline) {
                s1[j++] = '\n';
                width = 0;
            } else {
                s1[j++] = ' ';
                ++width;
            }
        } else if (c == '\t') {
            if (width + ntab - width % ntab >= nline) {
                s1[j++] = '\n';
                width = 0;
            } else {
                s1[j++] = '\t';
                width += ntab;
            }
        } else {
            s1[j++] = c;
            if (width + 1 == nline) {
                s1[j++] = '\n';
                width = 0;
            } else {
                ++width;
            }
        }
        ++i;
    }
    s1[j] = '\0';
}