/*  Author: Liam Lage
 *  28/09/2021
 *  Solutions for Exercise 1-5.
 */

#include <stdio.h>

/* print Fahrenheit to Celsius table from 300 to 0, 20° Step */
int main()  {
    float fahr;
    

    printf("%s","Fahrenheit to Celsius Conversion using 'for':\0");
    printf("%s\t%s", "\nFahrenheit\0", "Celsius\0");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)   {
        printf("\n%5.0f%s\t\t%6.1f%s", fahr, "°", (5.0/9.0)*(fahr-32), "°"); 
    }
}