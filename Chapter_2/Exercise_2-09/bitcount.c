/* Liam Lage
 * 20/10/2021
 *
 * Solution for Exercise 2-9.
 * In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
 * in x. Explain why. Use this observation to write a faster version of bitcount.
 *
 * References:
 * https://en.wikipedia.org/wiki/Two%27s_complement
 */
#include <stdio.h>

int originalbitcount(unsigned x);
int bitcount(unsigned x);

int main(int argc, char *argv[]) {
    printf("modified bitcount result: %d\n", bitcount((unsigned)15));
    printf("original bitcount result: %d\n", originalbitcount((unsigned)15));
    return 0;
}

//  bitcount: count 1 bits in x
int bitcount(unsigned x) {
    int bits;
    for (bits = 0; x != 0; x &= (x - 1))
        bits++;
    return bits;
}

//  originalbitcount: count 1 bits in x
    int originalbitcount(unsigned x) {
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}