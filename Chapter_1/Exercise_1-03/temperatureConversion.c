/*  Author: Liam Lage
 *  28/09/2021
 *  Solutions for Exercise 1-3.
 */
#include <stdio.h>
#define LOWER   0   // lower limit of table
#define UPPER   300 // upper limit of table
#define STEP    20  // step size

/* print Fahrenheit-Celsius table from
 * 0 to 300 degrees Fahrenheit */
int main (int argc, char *argv[]) {
    float fahr_f, celsius_f;
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step  = 20;     // step size

    fahr = lower;
    printf("%s\n", "Low precision using int:");
    printf("%s\n", "Fahrenheit\tCelsius");
    //printf("%s\n", "0 decimal places");
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;     /* the reason for multiplying by 5 then dividing
                                            by 9 instead of multiplying by 5/9 is that in
                                            C, integer division truncates: any fractional
                                            part is disguarded. Since 5 and 9 are int, 5/9
                                            would be truncated to zero so all the Celsius
                                            temperatures would return as zero */
        printf("%3d\t\t%3d\n", fahr, celsius);    // %d is augmented with width; 3 digits wide
        fahr = fahr + step;
    }
    printf("%s\n", "\nHigher precision using float & 2dp:");
    printf("%s\n", "Fahrenheit\tCelsius");
    //printf("%s\n", "2 decimal places");
    while (fahr_f <= upper) {
        celsius_f = (5.0/9.0) * (fahr_f-32.0);    // Conversion formula °C = (5/9)(°F-32)
        printf("%3.0f\t\t%6.2f\n", fahr_f, celsius_f);
        fahr_f = fahr_f + step;
    }
    celsius_f = lower;
    printf("%s\n", "\nCelsius to Fahrenheit:");
    printf("%s\n", "Celsius\t\tFahrenheit");
    //printf("%s\n", "1 decimal place");
    while (celsius_f <= upper) {
        fahr_f = (celsius_f / (5.0/9.0)) + 32;
        printf("%3.0f\t\t%6.1f\n", celsius_f, fahr_f);
        celsius_f = celsius_f + step;
    }
    // print another Fahrenheit to Celsius table in reverse order (from 300 to 0) using the for loop
    printf("%s\n", "\nInverted table:");
    printf("%s\n", "Fahrenheit\tCelsius");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d\t\t%6.1f\n", fahr, ((5.0/9.0)*(fahr-32)));
    return 0;
}

