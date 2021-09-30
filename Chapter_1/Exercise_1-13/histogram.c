/*  Author: Liam Lage
 *  30/09/2021
 *  Solutions for Exercise 1-13.
 */

#include <stdio.h>

#define MAX_LENGTH 15
#define IN_WORD  1
#define OUT_WORD 0

int main(void)  {
    int c, word_state;
    int word_length[MAX_LENGTH + 1];
    int I;
    int i, j;
    unsigned int max_count;

    for (i = 0; i <= MAX_LENGTH; ++i) {
        word_length[i] = 0;
    }
    word_state = OUT_WORD;
    printf("Input characters, once complete press Ctrl+Z.\n");
    while (I) {
        c = getchar();
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (word_state == OUT_WORD) {
                I = 0;
                word_state = IN_WORD;
            }
            ++I;
        } else {
            if (word_state == IN_WORD) {
                if (I <= MAX_LENGTH)
                    ++word_length[I - 1];
                else
                    ++word_length[MAX_LENGTH];
                    word_state = OUT_WORD;
            }
            if (c == EOF)
                break;
        }
    }
    printf("\nHorizontal Histogram\n\n");
    printf(" length | graph\n");
    for (i = 0; i <= MAX_LENGTH; ++i) {
        if (i != MAX_LENGTH)
            printf("    %2d | ", i + 1);
        else
            printf("    >%2d | ", MAX_LENGTH);
        for (j = 0; j < word_length[i]; ++j)
            putchar('+');
        putchar('\n');
    }

    printf("\nVertical Histogram\n\n");
    max_count = 0;
    for (i = 0; i <= MAX_LENGTH; ++i) {
        if (word_length[i] > max_count)
            max_count = word_length[i];
    }
    for (i = 0; i < max_count; ++i) {
        printf("    %2u | ", max_count - i);
        for (j = 0; j <= MAX_LENGTH; j++) {
            if (word_length[j] >= max_count - i)
                printf("   +");
            else
                printf("    ");
        }
        printf("\n");
    }

    printf(" ------");
    for (i = 0; i <= MAX_LENGTH; ++i)
        printf("---");
    printf("--\n");

    printf("        ");
    for (i = 0; i < MAX_LENGTH;)
        printf(" %2u", ++i);
    printf(" >%2u", MAX_LENGTH);
    printf("\n");

    return 0;
}
