/* Author: Liam Lage
 * 02/10/2021
 */
#include <stdio.h>
#include <stdlib.h>
#define MAXLENGTH 100

float fahrenheit_to_celcius(float argFahrenheit)   {
    float c = 0;

    c = (5.0/9.0)*(argFahrenheit - 32);
    return c;
}

float celcius_to_fahrenheit(float argCelsius)   {
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

/* copy a string to another string */
void copy_string(char *from, char *to)  {
    int offset = 0;
    while (from[offset] != 0)   {
        to[offset] = from[offset];
        offset++;
    }
    to[offset] = 0; // make sure it's NULL terminated!
}

int main(int argc, char **argv) {
    int c, v, len, length;
    char line[MAXLENGTH];
    char num[MAXLENGTH] ;
    len = 0;
    length = 0;

    printf("%s\n\n", "Enter the temperature with the suffix C or F, then press Enter get a conversion:");

    for (int i = 0; (c = getchar()) != EOF && c != '\n'; ++i)  {
        line[i] = c;
    }
    len = get_string_length(line);

    if (line[len - 3] == 'F')   {
        for (int i = 0; i <= len - 3; ++i)
            num[i] = line[i];
        float x = atof(num);
        printf("%s\n%6.2f%s\n", "Fahrenheit to Celsius:", fahrenheit_to_celcius(x), "°C");
    }
    else if (line[len - 3] == 'C')  {
        for (int i = 0; i <= len - 3; ++i)
            num[i] = line[i];
        float y = atof(num);
        printf("%s\n%6.2f%s\n", "Celsius to Fahrenheit:", celcius_to_fahrenheit(y), "°F");
    }
    else
        printf("ERROR");
}
