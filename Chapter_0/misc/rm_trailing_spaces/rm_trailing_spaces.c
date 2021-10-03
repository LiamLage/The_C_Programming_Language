/* Author: Liam Lage
 * 03/10/2021
 * Solution to Exercise 1-18
 */
#include <stdio.h>
#define MAX_SIZE 100    // maximum string length

void trim_trailing(char *str);

int main(int argc, char **argv) {
    char str[MAX_SIZE];

    printf("Enter a string, then press Ctrl+Z: \n");    // prompt user
    gets(str);                                          // get user input

    printf("\nOriginal string, no trimming: \n\"%s\"", str);    // print entered string before trimming
    trim_trailing(str);
    printf("\n\nTrimmed string: \n\"%s\"", str);                // print trimmed string

    return 0;
}

void trim_trailing(char *str)   {
    int index, i;
    index = -1;     // default index
    i = 0;

    // find last character thats not a whitespace
    while (str[i] != '\0')  {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')  {
            index = i;
        }
        ++i;
    }
    str[index + 1] = '\0';  // NULL terminate the string
}
