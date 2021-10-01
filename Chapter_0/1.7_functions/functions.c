/*  Author: Liam Lage
 *  30/09/2021
 *  Section 1.7 - Functions
 */

/*  A function definition has this form:
 *  
 *  return-type function-name(parameter declarations, if any)   {
 *      declarations
 *      statements
 *  }
 */

#include <stdio.h>

int power(int m, int n);
int stdpow(double m, double n);
double pow();

/* test power function */
int main()  {
    int i, j;

    printf("Raise base to n-th power:\n");
    printf("n | base = 2 | base = -3\n");
    for (i = 0; i < 10; ++i) {
        printf("%d%s %7d%s %8d\n", i, " | ", power(2,i), " | ", power(-3,i));
    }
    printf("\nNow with std lib function pow():\n");
    printf("n | base = 2 | base = -3\n");
    for (j = 0; j < 10; ++j) {
        printf("%d%s %7d%s %8d\n", j, " | ", stdpow(2,j), " | ", stdpow(-3,j));
    }
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i) {
        p = p * base;
    }
    return p;
}

/* stdpow: raise base to n-th power using stdlib pow() */
int stdpow(double base, double n) {
    int i, p2;
    p2 = 1;
    for (i = 0; i < n; ++i) {
        p2 = pow(base, n);
    }
    return p2;
}