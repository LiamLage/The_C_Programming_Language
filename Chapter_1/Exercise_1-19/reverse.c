/*  Author: Liam Lage
 *  01/10/2021
 *  Solution to Exercise 1-19
 */
#include <stdio.h>
#include <strings.h>
#define MAXLINE 1000    // Maximum input length

int getlen(char *str)   {
    int offset = 0;
    while (str[offset] != 0)
        offset++;
    return offset;
}

void reverse0(char *str)    {
    int length = getlen(str);
    for (int i = 0; i < length/2; ++i)  {
        // swap characters
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main()  {
    char input[MAXLINE];
    printf("Input characters to be reversed: \n");
    scanf("%s", input);
    reverse0(input);
    printf("%s\n", input);
}