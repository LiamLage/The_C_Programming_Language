/* Liam Lage
 * 20/10/2021
 *
 * Solution for Exercise 2-8.
 * Write a function rightrot(x,n) that returns the value of
 * the integer x rotated to the right by n positions. */
#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main(int argc, char *argv[]) {
    printf("Result: %u\n", rightrot((unsigned)255, 3));
    return 0;
}

// rightrot: rotate x to the right by n positions
unsigned rightrot(unsigned x, int n) {
    int input_length(void);
    unsigned r_bit; // rightmost bit
    	
    r_bit = x << (input_length() - n);
    x >>= n;
    x |= r_bit;
    return x;
}

int input_length(void) {
    int i;
    unsigned v = (unsigned)~0;

    for (i = 1; (v >>= 1) > 0; i++)
        ;
    return i;
}

// n = 3
// x(255)   = 00000000 00000000 00000000 11111111
// rightrot = 11100000 00000000 00000000 00011111