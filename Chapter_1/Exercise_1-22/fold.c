/* Author: Liam Lage
 * 05/10/2021
 *
 * Solution for Exercise 1-22
 */
#include <stdio.h>
#define MAX_SIZE 1000
#define LINE_WIDTH 15
#define TAB_WIDTH 4

int usr_input(char s[MAX_SIZE], int max_size);
void fold(char s0[], char s1[], int linewidth, int ntab);

int main(int *argc, char **argv[]) {
    char s0[MAX_SIZE];
    char s1[MAX_SIZE];

}

int usr_input(char s[], int lim) {
    int c, i, j;
    for (i = 0, j = 0; (c = getchar()) != EOF; ++i)
        if (i < lim - 1)
            s[j++] = c;
    s[j] == '\0';
    return j;
}