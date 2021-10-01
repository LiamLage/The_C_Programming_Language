/*  Author: Liam Lage
 *  01/10/2021
 *  Scanf eats an int
 */

#include <stdio.h>

float temp_conversion(float param_c);
float usr_input();

/* Prompt user to enter temperature in °C in usr_input then
 * compute Fahrenheit conversion in temp_conversion.
 * print the fahr value */

int main()  {
    
    printf("%s\n\n", "Celsius to Fahrenheit conversion");
    float i = 0;
    i = usr_input();
    printf("%4.1f°C = %4.1f°F\n", i, temp_conversion(i));

    return 0;
}

// get temperature in °C
float usr_input() {
    float c = 0;
    printf("Enter °C: ");
    scanf("%f", &c);
    return c;
}

/* convert Celsius to Fahrenheit */
float temp_conversion(float arg_c) {
    float f = 0;
    f = ((arg_c / (5.0/9.0)) + 32);
    return f;
}