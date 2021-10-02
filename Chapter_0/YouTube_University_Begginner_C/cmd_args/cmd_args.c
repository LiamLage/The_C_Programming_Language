/* Getting Command-Line Arguments in C
 * Thanks to Jacob Sorber for his tutorial:
 *  https://www.youtube.com/watch?v=6Dk8s0F2gow&list=PL9IEJIKnBJjG5H0ylFAzpzs9gSmW_eICB&index=9
 *
 * Liam Lage
 * 02/10/2021
 */

#include <stdio.h>
#include <stdlib.h>
/* The standard way to recieve parameters from terminal
 * that you can use in your program is by passing the
 * arguments int argc, char **argv to main. */
int main(int argc, char **argv)  {      /* argc counts the number of arguments passed in cmd
                                         * argv is a double char pointer; an array of strings */
    printf("\n%s\n", "Number of arguments:");
    printf("argc = %d\n", argc);        /* note how argc actually returns n_args+1 because the
                                         * name of the program is seen as an arg */
    /* print the arg index, then the arg, then an int followed by a float
     * note that the arguments must be entered in the correct order i.e.
     * %s, %s, %i, %f etc. */
    printf("%s\n", "Argument list:");
    for (int i = 0; i < argc; i++)  {
        printf("arg %d - %s\t\t%s%i\t%s%f\n", i, argv[i],
        "int: ", atoi(argv[i]), "float: ", atof(argv[i]));  // atoi converts ascii to int, atof ascii to float
    }
}

