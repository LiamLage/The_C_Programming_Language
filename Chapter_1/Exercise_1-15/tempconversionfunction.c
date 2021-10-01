/*  Author: Liam Lage
 *  01/10/2021
 *  Solutions for Exercise 1-14.
 */

#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP  20

float temp_conversion(float param_f);

/* Print a Fahrenheit to Celsius conversion table
 * between 0°F and 300°F with an increment of 20°
 * using a function for the temperature conversion. */

int main(void)  {
    float fahr;

    printf("%s\n\n", "Fahrenheit to Celsius conversion");
    printf("Fahrenheit | Celsius\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%8.0f%s%5.1f%s\n", fahr, "°F | ", temp_conversion(fahr), "°C");
    return 0;
}

/* convert Fahrenheit to Celsius*/
float temp_conversion(float arg_f) {
    float c;
    c = 0;
    c = (5.0/9.0)*(arg_f - 32);
    return c;
}