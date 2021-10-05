/* Author: Liam Lage
 * 05/10/2021
 *
 * Solution for Exercise 2-1.
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

/* determine the ranges of various data types
 * both signed and unsigned, by printing
 * approximate values from std headers and by
 * computation
 */

void signed_range(int bytes);
void unsigned_range(int bytes);

int main(int *argc, char **argv[]) {
    // determine range by computation
    printf("%s\n%s\n", "Range of Data Types by Computation", "================================================");
    // char
    printf("Range of char: ");
    signed_range(sizeof(char));
    printf("Range of unsigned char: ");
    unsigned_range(sizeof(char));
    // short
    printf("Range of short: ");
    signed_range(sizeof(short));
    printf("Range of unsigned short: ");
    unsigned_range(sizeof(short));

    // int
    printf("Range of int: ");
    signed_range(sizeof(int));
    printf("Range of unsigned int: ");
    unsigned_range(sizeof(int));

    // long
    printf("Range of long: ");
    signed_range(sizeof(long));
    printf("Range of unsigned long");
    unsigned_range(sizeof(long));

    // long long
    printf("Range of long long: ");
    signed_range(sizeof(long long));
    printf("Range of unsigned long long: ");
    unsigned_range(sizeof(long long));

    // double
    printf("Range of double: ");
    signed_range(sizeof(double));
    printf("Range of unsigned double: ");
    unsigned_range(sizeof(double));

    // float
    printf("Range of float: ");
    signed_range(sizeof(float));
    printf("Range of unsigned float: ");
    unsigned_range(sizeof(float));


    // determine range from limits.h
    printf("\n\n\n%s\n%s\n", "Range of Data Types as defined in limits.h", "================================================");
    // char
    printf("Range of char:\n");
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0 to %d\n\n", UCHAR_MAX);

    // short
    printf("Range of short:");
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: to %d\n\n", USHRT_MAX);

    // int
    printf("Range of int:\n");
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %d\n\n", UINT_MAX);

    // long
    printf("Range of long:\n");
    printf("long: %d to %d\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %d\n\n", ULONG_MAX);

    // long long
    printf("Range of long long:\n");
    printf("long long: %d to %d\n", LONG_LONG_MIN, LONG_LONG_MAX);
    printf("unsigned long long: 0 to %d\n\n", ULONG_LONG_MAX);


    // determine range from float.h
    printf("\n\n\n%s\n%s\n", "Range of Data Types as defined in float.h", "================================================");
    // float
    printf("Range of float:\n");
    printf("float: %d to %d\n\n", FLT_MIN, FLT_MAX);

    // double
    printf("Range of double:\n");
    printf("double: %d to %d\n\n", DBL_MIN, DBL_MAX);

    // long double
    printf("Range of long double:\n");
    printf("long double: %d to %d\n\n", LDBL_MIN, LDBL_MAX);
}

void signed_range(int bytes) {
    int bits = bytes * 8;
    long long from = (pow(2, (bits - 1)));
    long long to   = (pow(2, (bits - 1)) * (-1));

    printf("%lld to %lld\n", from, to);
}

void unsigned_range(int bytes) {
    int bits = bytes * 8;
    unsigned long long to = (pow(2, (bits - 1)));

    printf("0 to %llu\n\n", to);
}
