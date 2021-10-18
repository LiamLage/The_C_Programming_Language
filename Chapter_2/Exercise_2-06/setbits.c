/* Liam Lage
 * 18/10/2021
 *
 * Solution for Exercise 2.6
 * www.learntosolveit.com/cprogramming/Ex_2.6_setbits.html */

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(int argc, char *argv[]) {
    printf("%u",setbits((unsigned)12,3,2,(unsigned)57));
    return 0;
}

/* setbits: Write a function setbits(x,p,n,y) 
   that returns x with the n bits that begin at position p set to 
   the rightmost n bits of y, leaving the other bits unchanged. */
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return x & ~(~(~0 << n) << (p+1-n)) | (y & (~(~0<<n)) << (p+1-n));
}