/* Liam Lage
 * 19/10/2021
 * 
 * Solution for Exercise 2-7.
 * Write a function invert(x,p,n) that returns x with the n bits that
 * begin at position p inverted (i.e. 1 changed to 0 and visa versa),
 * leaving the others unchanged. */
#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(int argc, char *argv[]) {
    printf("Result: %u\n", (unsigned)invert((unsigned)128, 4, 3));
    return 0;
}

unsigned invert(unsigned x, int p, int n) {
    int shift = p - n + 1;
    unsigned mask = (1 << n) - 1;
    //unsigned mask = ~(~0 << n);
    return (x ^ (mask << shift));
    
}


// p = 4, n = 3 
// x(128)  = 00000000 00000000 00000000 10000000
// invert  = 00000000 00000000 00000000 10011100
