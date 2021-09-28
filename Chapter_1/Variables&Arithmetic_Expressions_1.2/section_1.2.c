/* 1.2 Variables & Arithmetic Expressions
*   This program uses the formula °C = (5/9)(°F-32) to print
*   a table of Fahrenheit temperatures and their centigrade
*   or Celsius equivalents:
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

main () {
/* Variable declaration
   type, name */
    float fahr_f, celsius_f;
    int fahr, celsius;
    int lower, upper, step;
    /* C provides several basic data types including
    int     integer
    float   floating point i.e. numbers that may have a fractional part
    char    character - a single byte
    short   short integer
    long    long integer
    double  double-precision floationg point 
    */    

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step  = 20;      // step size

    #define LOWER   0   /* lower limit of table */
    #define UPPER   300 /* upper limit of table */
    #define STEP    20   /* step size */

    fahr = lower;
    printf("%s\n", "Fahrenheit to Celsius");
    printf("%s\n", "0 decimal places");
    while (fahr <= upper)   {
        celsius = 5 * (fahr-32) / 9;
        /* the reason for multiplying by 5 then dividing
           by 9 instead of multiplying by 5/9 is that in
           C, integer division truncates: any fractional
           part is disgarded. Since 5 and 9 are int, 5/9
           would be truncated to zero so all the Celsius
           temperatures would return as zero
        */
        printf("%3d\t%3d\n", fahr, celsius);    // %d is augmented with width; 3 digits wide
        fahr = fahr + step;
    }
    printf("%s\n", "Fahrenheit to Celsius");
    printf("%s\n", "2 decimal places");
    while (fahr_f <= upper)   {
        celsius_f = (5.0/9.0) * (fahr_f-32.0);
        printf("%3.0f\t%6.2f\n", fahr_f, celsius_f);
        fahr_f = fahr_f + step;
    }
    celsius_f = lower;
    printf("%s\n", "Celsius to Fahrenheit");
    printf("%s\n", "1 decimal place");
    while (celsius_f <= upper)
    {
        fahr_f = (celsius_f / (5.0/9.0)) + 32;
        printf("%3.0f\t%6.1f\n", celsius_f, fahr_f);
        celsius_f = celsius_f + step;
    }
    /* Section 1.3
    /* print another Fahrenheit to Celsius table in reverse order (from 300 to 0) using the for loop */
    printf("%s\n", "Fahrenheit to Celsius in Reverse Order");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d\t%6.1f\n", fahr, ((5.0/9.0)*(fahr-32)));
}

