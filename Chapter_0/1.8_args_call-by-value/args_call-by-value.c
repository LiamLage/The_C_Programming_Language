/*  Author: Liam Lage
 *  30/09/2021
 *  Section 1.8 - Arguments -- Call by Value
 */

/*  A function definition has this form:
 *  
 *  return-type function-name(parameter declarations, if any)   {
 *      declarations
 *      statements
 *  }
 * 
 *  i.e.
 *  float maths(float x, float y);
 * 
 *  int main() {
 *      printf("%4.1f"maths(69, 13)\n");    // here the function maths() is called and passed two arguments
 *      return 0;
 * }
 *  
 *  float maths(float x, float y) {
 *      float z = 0;
 *      x = x * 69;                         /* the var x can be modified with no effect on the parameter i in *
 *      float z = (x + y);                  /* the calling function because the parameters can be treated a   *
 *      return z;                           /* local variable in the called function (maths())                *
 * }
 */

#include <stdio.h>

int power(int param_base, int param_n);

/* test power V2 function */
int main()  {
    int i;
    printf("Raise base to n-th power:\n");
    printf("n | base = 2 | base = -3\n");

    for (i = 0; i < 10; ++i) {
        printf("%d%s %7d%s %8d\n", i, " | ", 
            power(2,i), " | ", power(-3,i));
    }
    return 0;
}

/* power: raise base to n-th power; n >= 0; version 2 */
int power(int base, int n) {
    int p;

    for (p = 1; n > 0; --n) {   /* the parameter n is used as a temporary variable and is counted down until zero; */
        p = p * base;           /* note how var p is conveniently initialized local var in the called subroutine,  */
    }                           /* there is no longer a need for var i. Whatever is done to n inside power has no  */
    return p;                   /* effect on the arument that power was originally called with as power cannot     */
                                /* directly alter var n in the calling function, if you'd like to use a function   */
                                /* alter a variable in the calling function, the caller must provide the address   */
                                /* of the variable to be set, and the called function must declare the parameter   */
                                /* to be a pointer and access the variable indirectly through it.                  */
}

/* power: raise base to n-th power; n >= 0; old version for comparison
int power(int base, int n) {
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i) {
        p = p * base;
    }
    return p;
}
*/