/*  Author: Liam Lage
 *  28/09/2021
 *  Solutions for Exercise 1-4.
 */

#include <stdio.h>
#include <stdint.h>

/* print Celsius-Fahrenheit Table */
int32_t main(int32_t argc, char *argv[])  {
    float fahr, celsius;
    int lower = 0;      /* lower limit of temperature table */
    int upper = 300;    /* upper limit */
    int step  = 20;     /* lower limit */

    celsius = lower;
    printf("%s\n", "Celsius to Fahrenheit Conversion, 2dp.");
    printf("\n%s\n", "Celsius\t\tFahrenheit");
    while (celsius <= upper)
    {
        fahr = (celsius / (5.0/9.0)) + 32;
        printf("%5.1f\t\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}