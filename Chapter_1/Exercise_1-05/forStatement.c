/*  Author: Liam Lage
 *  28/09/2021
 *  Solutions for Exercise 1-2.
 */

#include <stdio.h>

/* print Fahrenheit to Celsius table using a 'for' statement */
int main()  {
    float fahr;

    printf("%s","Fahrenheit to Celsius Conversion using 'for':\0");
    printf("%s\t%s", "\nFahrenheit\0", "Celsius\0");

    for (fahr = 0; fahr <=300; fahr = fahr + 20)   {
        printf("\n%5.1f\t\t%6.1f", fahr, (5.0/9.0)*(fahr-32)); 
    }
}