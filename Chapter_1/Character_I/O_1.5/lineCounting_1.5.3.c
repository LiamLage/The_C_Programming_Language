# include <stdio.h>

/* count lines in input */
void main()  {
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)  {
        if (c == '\n')
            ++nl;
    printf("%s%d\n", "Line Count: ", nl);
    }
}