# include <stdio.h>

/* count characters in input; 1st version */
void print();
long nc;    /* long integers are at least 32 bits */
double cc;


int main (void) {
    // nc = 0;
    // while(getchar() != EOF) {   /* while input is not end-of-file */
    //  ++nc;   /* prefix ++ operator increments nc; evquivalent to nc = nc + 1 */
//  }
    /* count characters in input; 2nd version */
    for (cc = 0; getchar() != EOF; ++cc)    {
        print();
    }
    return 0;
}

void print()    {
    printf("%s%.0f\n", "Character Count: ", cc);
    // printf("%1d\n", nc);    /* the conversion sprecification %1d tells printf that the argument is a long integer */
    // printf("%.0f\n", cc);
}

