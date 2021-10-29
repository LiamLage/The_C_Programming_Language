/* Author: Liam Lage
 * 29/10/2021
 * 
 * Solution for Exercise 2-10.
 * 
 * Rewrite the function 'lower', which converts upper case letters to
 * lower case, with a conditional expression insead of 'if-else'.
 */
#include <stdio.h>
#define LIM 1000

int lower(int c);

int main(int argc, char *argv[]) {
    char str[LIM] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
    int i = 0;

    while (str[i] != '\0') { 
        printf("Result: %c -> %c\n", str[i], lower(str[i]));
        i++;
    }
    return 0;
}


// lower: convert c to lower case; ASCII only
int lower(int c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}


/*
Below is the original lower function for reference
lower: convert c to lower case; ASCII only
 int lower(int c){
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
*/