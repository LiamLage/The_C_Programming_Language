/* Author: Liam Lage
 * 02/10/2021
 */

/* Enter the temperature with the suffix C or F
 * and press enter to convert from C to F and
 * visa versa. */
#include <stdio.h>
#include <stdlib.h>
#define MAXLENGTH 100

/* convert Fahrenheit to Celsius*/
float fahrenheit_to_celsius(float argFahrenheit)   {
    float c = 0;

    c = (5.0/9.0)*(argFahrenheit - 32);
    return c;
}

/* convert Celsius to Fahrenheit */
float celsius_to_fahrenheit(float argCelsius)   {
    float f = 0;

    f = (argCelsius / (5.0/9.0)) + 32;
    return f;
}

/* get the length of the input string */
int get_string_length(char *str)   {
    int offset = 0;
    while (str[offset] != 0)    {       /* make sure string is NULL terminated. */
        offset++;
    }
    return offset;
}


int main(int argc, char **argv) {
    int c, len;
    float x;                            /* Holds the numerical value of num array */
    char line[MAXLENGTH];               /* Holds the input line including suffix */
    char num[MAXLENGTH] ;               /* Holds the input line with the suffix removed */
    len = x = 0;

    printf("%s\n\n", "Enter the temperature with the suffix C or F, then press Enter to convert:"); /* prompt the user */

    for (int i = 0; (c = getchar()) != EOF && c != '\n'; ++i)  {    /* save the input to an array*/
        line[i] = c;
    }
    len = get_string_length(line);                                  /* get the length of the input */

    if (line[len - 1] == 'F')   {                                   /* the last letter is 'F', input is Fahrenheit */
        for (int i = 0; i <= len - 1; ++i)
            num[i] = line[i];
        x = atof(num);                                              /* convert the string to a float */
        printf("%s\n%6.2f%s\n", "Fahrenheit to Celsius:", fahrenheit_to_celsius(x), "°C");  /* convert from F to C and print */
    }
    else if (line[len - 1] == 'C')  {                               /* the last letter is 'C', input is Centigrade */
        for (int i = 0; i <= len - 1; ++i)
            num[i] = line[i];
        x = atof(num);                                              /* convert the string to a float */
        printf("%s\n%6.2f%s\n", "Celsius to Fahrenheit:", celsius_to_fahrenheit(x), "°F");  /* convert from C to F and print */
    }
    else
        printf("ERROR");                                            /* something went wrong */
}
