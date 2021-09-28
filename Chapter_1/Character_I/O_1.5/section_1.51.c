/* Section 1.5
    Character Input & Output */
/* read a character
    while (character is not end-of-file indicator)
    output the character just read
    read a character
    */

#include <stdio.h>

/* copy input to output; 1st version */
main()  {
    int c;  /* must declare 'c' to be a type big enough to hold any value that getchar returns, EOF + any char, therefore we use int */

    c = getchar();          /* getchar returns a distinctive value when there is no more input, called EOF */
/*    while (c != EOF)    {   /* EOF is an int defined in stdio.h, "end of file" 
        putchar(c);
        c = getchar();
    }    

/* more experienced programmers would put the assignment of a character to x inside the test part of the while loop */
/* copy input to output; 2nd version */

    int x;
    int e;
    int EOF_val;

    while ((x = getchar()) != EOF)  {   /* while gets a char, tests if it is EOF; if not then the char is printed */
        putchar(x);
    }

    /* Exercise 1.6 & 1.7 */
    e = (getchar() != EOF);
    EOF_val = EOF;
    printf("%s\n", "Value of getchar() != EOF:");
    printf("%d\n", e);
    printf("%s\n","The value of EOF:");
    printf("%d\n", EOF_val);
}