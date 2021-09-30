/*  Author: Liam Lage
 *  30/09/2021
 *  Solutions for Exercise 1-14.
 */

#include <stdio.h>

#define IN_WORD   1
#define OUT_WORD  0
#define NUM_CHARS 128

int main(void)  {
    int c;
    int char_freq[NUM_CHARS + 1];
    int i;

    for (i = 0; i <= NUM_CHARS; ++i)
        char_freq[i] = 0;

    printf("Input characters, once complete press Ctrl+Z.\n");
    while ((c = getchar()) != EOF)
        ++char_freq[c];

    printf("\n ASCII | Count\n");
    for (i = 0; i <= NUM_CHARS; i++)
        if (char_freq[i] > 0)
            printf(" %5d : %5d\n", i, char_freq[i]);

    return 0;
}