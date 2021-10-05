/* Author: Liam Lage
 * 05/10/2021
 *
 * Solutions to Exercise 1-22
 */

#include <stdio.h>
#define MAX_SIZE 1000

int usr_input(char s[], int max_line);

int main(int *argc, char **argv[])  {
    char s[MAX_SIZE];
    int i, length;

    printf("Enter code, comments will be removed:\n");
    while ((length = usr_input(s, MAX_SIZE)) > 0) {
        printf("\nResult:\n");
        i = 0;
        while (s[i] != '\0') {
            if (s[i] == '/' && s[i+1] == '/') {
                while (s[i] != '\n' && s[i] != '\0')
                    ++i;
            } else if (s[i] == '/' && s[i+1] == '*') {
                while (s[i] == '*' || s[i] != '*' && s[i+1] != '/' && s[i+2] != '\0')
                        ++i;
            } else if (s[i] == '/' && (s[i+1] != '/' || s[i+1] != '*')) {
                putchar('/');
                ++i;
            } else {
                putchar(s[i++]);
            }
        }
    }
    return 0;
}

int usr_input(char s[], int max) {
    int c, i, j;
    for (i = 0, j = 0; (c = getchar()) != EOF; ++i)
        if (i < max - 1)
            s[j++] = c;
    s[j] = '\0';
    return j;
}



/*
int main(void)  {
    char str[] = "This is a test";  // These are some comments
    printf("%s\n", str);
    return 0;
    maths = 2/3;
    more comments;  // comment
}
*/
