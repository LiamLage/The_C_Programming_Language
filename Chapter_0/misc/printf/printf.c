/*  Author: Liam Lage
 *  28/09/2021
 *  printf() examples & variations in C
 */

#include <stdio.h>

int main()  {
    int num = 255;
    int len = 0;
    float val = 1.234567;

    printf("%s\n", "This program shows the various uses of 'printf()' for the following values: "); /* Intro */
    printf("%s%4d\n%s%8.7f\n\n", "int num: ", num, "float val: ", val);

    printf("Hello World");      /* no format */
    printf("\n");               /* '\n' - newline on newline */
    printf("\"Hello World,\"\n\"How are you?\"\n");     /* '\n' - carrige return / newline + '\"' for the lekker formatting*/
    printf("\"Hello World\"\n");                        /* '\"' - double quotation marks */
    printf("The efficiency was 69%%\n");                /* '%%' - percent sign  */
    printf("num in octal format: %o\n", num);           /* '%o' - octal format */
    printf("num in Hexidecimal format (lowercase): %x\n", num);  /* '%x' - Hexidecimal format (lowercase) */
    printf("num in Hexidecimal format (Uppercase): %X\n", num);  /* '%X' - Hexidecimal format (Uppercase) */
    printf("This is a long string so I can split it\
            between two lines for propper formatting\n");        /* '\' - Split a long string for propper formatting */
    printf("The file is stored at c:\\Users\\admin\\C\n");       /* '\\' - Backslash  */
    len = printf("Hello\n");                                     /* Return total number of printed characters */
    printf("Length: %d\n", len);                                 /* Display total number of characters in above line*/
    printf("num (padded): %05d\n", num);                         /* '%05d' - Print interger value 5 digit left padded with 0 */
    printf("str1 = \"%20s\", str2 = \"% - 20s\"\n", "Hello", "World");  /* '%20s' - Print 20 digit left padded with 0 
                                                                         * where padding = 20 - number of char in string
                                                                         * Similarly, to print right padded text with space
                                                                         * we use a flag '-' i.e. '%-20s' */
    printf("val = %.2f\n", val);            /* '%.2f' - Print float value to specified number
                                             *  of digits after decimal point */
    printf("num = %i\n", num);              /* '%i' - Interger value specifier, same as '%d' */
    printf("Address of num is: %p\n", num); /* '%p' - Address of var in hexidecimal */
    printf("%s\n", "Dankie, come again");

}