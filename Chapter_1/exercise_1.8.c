#include <stdio.h>
/* this program counts blanks, tabs and newlines */
void print();
char str1[50];
int c;
int blank, tab, nl, digit = 0;

int main()     {
    printf("Enter sentence: ");
    scanf("%s", str1);
    
    while ((c = getchar()) != EOF)  {
        if (c == '\n')  {
            ++nl;
            print();
        } else if (c == '\t')    {
            ++tab;
        } else if (c == ' ')    {
            ++blank;
        } else if (c >= '0' && c <= '9')    {
            ++digit;
        }
    }
}

void print()    {
    printf("%s%d\n%s%d\n%s%d\n%s%d\n", "Blanks: ", blank, "Tabs: ", tab, "New Lines: ", nl, "Digits: ", digit);
}