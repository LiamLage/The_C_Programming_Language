/* Author: Liam Lage
 * 05/10/2021
 *
 * Solution for Exercise 2-1.
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>
#include <math.h>

/* determine the ranges of various data types
 * both signed and unsigned, by printing
 * approximate values from std headers and by
 * computation
 */

void signed_range(int bytes);
void unsigned_range(int bytes);
void print(void);

int main(int argc, char *argv[]) {
    print();
    return 0;
}

// compute signed range
void signed_range(int bytes) {
    int bits = bytes * 8;
    long long from = (pow(2, (bits - 1)));
    long long to   = (pow(2, (bits - 1)) * (-1));

    printf("%lld to %lld\n", to, from);
}

// compute unsigned range
void unsigned_range(int bytes) {
    int bits = bytes * 8;
    unsigned long long to = (pow(2, (bits - 1)));

    printf("0 to %llu\n\n", to);
}

// print the ranges of all data types
void print(void) {
    // determine range by computation
    printf("%s\n%s\n", "Range of Data Types by Computation", "================================================");
    // char & unsigned char
    printf("Range of char:\t\t");
    signed_range(sizeof(char));
    printf("Range of unsigned char: ");
    unsigned_range(sizeof(char));

    // short & unsigned short
    printf("Range of short:\t\t ");
    signed_range(sizeof(short));
    printf("Range of unsigned short: ");
    unsigned_range(sizeof(short));

    // int & unsigned int
    printf("Range of int:\t\t");
    signed_range(sizeof(int));
    printf("Range of unsigned int:  ");
    unsigned_range(sizeof(int));

    // int8_t & uint8_t
    printf("Range of int8_t:  ");
    signed_range(sizeof(int8_t));
    printf("Range of uint8_t: ");
    unsigned_range(sizeof(uint8_t));

    // int16_t & uint16_t
    printf("Range of int16_t:  ");
    signed_range(sizeof(int16_t));
    printf("Range of uint16_t: ");
    unsigned_range(sizeof(uint16_t));

    // int32_t & uint32_t
    printf("Range of int32_t:  ");
    signed_range(sizeof(int32_t));
    printf("Range of uint32_t: ");
    unsigned_range(sizeof(uint32_t));

    // int64_t & uint64_t
    printf("Range of int64_t:  ");
    signed_range(sizeof(int64_t));
    printf("Range of uint64_t: ");
    unsigned_range(sizeof(uint64_t));

    // long & unsigned long
    printf("Range of long:\t\t");
    signed_range(sizeof(long));
    printf("Range of unsigned long: ");
    unsigned_range(sizeof(long));

    // long long & unsigned long long
    printf("Range of long long:\t     ");
    signed_range(sizeof(long long));
    printf("Range of unsigned long long: ");
    unsigned_range(sizeof(long long));

    // double & unsigned double
    printf("Range of double:\t  ");
    signed_range(sizeof(double));
    printf("Range of unsigned double: ");
    unsigned_range(sizeof(double));

    // long double
    printf("Range of long double:\t");
    signed_range(sizeof(long double));

    // float & unsigned float
    printf("Range of float:\t\t ");
    signed_range(sizeof(float));
    printf("Range of unsigned float: ");
    unsigned_range(sizeof(float));


    // determine range from limits.h
    printf("\n\n\n%s\n%s\n", "Range of Data Types as defined in limits.h", "================================================");
    // char & unsigned char
    printf("Range of char:\n");
    printf("char:\t       %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char:   %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0 to %d\n\n", UCHAR_MAX);

    // short & unsigned short
    printf("Range of short:\n");
    printf("short:\t\t%d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %d\n\n", USHRT_MAX);

    // int & unsigned int
    printf("Range of int:\n");
    printf("int:\t      %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %d\n\n", UINT_MAX);

    // long & unsigned long
    printf("Range of long:\n");
    printf("long:\t       %d to %d\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %d\n\n", ULONG_MAX);

    // long long & unsigned long long
    printf("Range of long long:\n");
    printf("long long:\t      %d to %d\n", LONG_LONG_MIN, LONG_LONG_MAX);
    printf("unsigned long long: 0 to %d\n\n", ULONG_LONG_MAX);


    // determine range from stdint.h
    printf("\n\n\n%s\n%s\n", "Range of Data Types as defined in stdint.h", "================================================");
    // 8 bit int
    printf("Range of fixed width 8 bit int:\n");
    printf("int8_t:  %d to %d\n", INT8_MIN, INT8_MAX);
    printf("uint8_t: 0 to %d\n\n", UINT8_MAX);

    // 16 bit int
    printf("Range of fixed width 16 bit int:\n");
    printf("int16_t:  %d to %d\n", INT16_MIN, INT16_MAX);
    printf("uint16_t: 0 to %d\n\n", UINT16_MAX);

    // 32 bit int
    printf("Range of fixed width 32 bit int:\n");
    printf("int32_t:  %d to %d\n", INT32_MIN, INT32_MAX);
    printf("uint32_t: 0 to %d\n\n", UINT32_MAX);

    // 64 bit int
    printf("Range of fixed width 64 bit int:\n");
    printf("int64_t:  %d to %d\n", INT64_MIN, INT64_MAX);
    printf("uint64_t: 0 to %d\n\n", UINT64_MAX);


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
