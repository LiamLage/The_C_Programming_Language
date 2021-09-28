/*  Author: Liam Lage
 *  28/09/2021
 *  printf() examples & variations in C
 */

#include <stdio.h>

/*  An int cannot represent fractional values,
 *  integer division truncates: any fractional
 *  part is disgarded.
 * 
 *  Integer Types
 *  Signed (0 indexed): 
 *      char
 *      short
 *      int
 *      long
 *      long long
 *  Unsigned (can be < 0)
 *      unsigned char
 *      unsigned short
 *      unsigned int
 *      unsigned long
 *      unsigned long long
 *  Fixed Width (stdint.h)
 *      Signed (0 indexed):    
 *          int(bit length)_t
 *          int8_t
 *          int16_t
 *          int32_t
 *          int64_t
 *      Unsigned (int can be < 0):    
 *          uint(bit length)_t
 *          uint8_t
 *          uint16_t
 *          uint32_t
 *          uint64_t
 */

/*  A floating point number can represent Real numbers  
 *  with a fractional component, they have variable 
 *  precision. A 'double' has twice the precision of 
 *  a 'float'.
 * 
 *  Floating Point Numbers
 *      float
 *      double
 *      long double
 * 
 */

char x;

void charFunction();

int main()  {
    charFunction();
}

void charFunction() {

    while ((x = getchar()) != EOF)  {   /* while gets a char, tests if it is EOF; if not then the char is printed */
        printf("%c\n", x);
    }
}