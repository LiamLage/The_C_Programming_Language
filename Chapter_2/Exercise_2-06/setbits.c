/* Liam Lage
 * 18/10/2021
 *
 * Solution for Exercise 2.6
 */

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);;

int main(int argc, char *argv[]) {
    printf("%u\n",setbits((unsigned)128,3,4,(unsigned)15));
    return 0;
}

/* setbits: returns x with the n bits that begin at position p set to the
            rightmost n bits of y, leaving the other bits unchanged. */
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    int shift = p - n + 1;
    unsigned mask = (1 << n) - 1;
    return (x & ~(mask << shift)) | ((y & mask) << shift);  // (x & ForceRelevantBitsOff) | (y-bits << ShiftToRelevantPlace)
}



// p = 3        n = 4

// x(128) = 00000000 00000000 00000000 10000000
// y(15)  = 00000000 00000000 00000000 00001111
// rightmost n bits of y = 00000000 00000000 00000000 00001111
//                         00000000 00000000 00000000 00001111

// setbits     = 00000000 00000000 00000000 10000000
//               00000000 00000000 00000000 00001111
// result(143) = 00000000 00000000 00000000 10001111



/* if mask = (1 << n) - 1,
 *    shift = p - n + 1,
 *    lhs = (x & ~(mask << shift)),
 *    rhs = ((y & mask) << shift),
 *    result = lhs | rhs
 *    
 *    x = 128
 *    p = 3
 *    n = 4
 *    y = 15
 */

// Left Hand Side
// x & forceRevelventBitsOff
// (x & ~(mask << shift))
// (x & ~(15 << 0))
// (x & ~(00001111))
// (x & 11110000)
// 10000000 & 11110000
// 10000000
// 11110000
// 10000000

// Right Hand Side
// y-bits << ShiftToRelevantPlace
// ((y & mask) << shift)
// ((00001111 & 00001111) << 00000000)
// (00001111 << 00000000)
// 00001111


// return (lhs | rhs)
// 10000000
// 00001111
// 10001111