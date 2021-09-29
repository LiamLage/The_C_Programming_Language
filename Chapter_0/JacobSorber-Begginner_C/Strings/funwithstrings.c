#include <stdio.h>
#include <string.h>

int get_string_length(char * str)   {
    int offset = 0;
    while (str[offset] != 0)    {
        offset++;
    }
    return offset;
}

void copy_string(char *from, char *to)  {
    int offset = 0;
    while (from[offset] != 0)   {
        to[offset] = from[offset];
        offset++;
    }
    to[offset] = 0; // make sure it's NULL terminated!
}

int main(int argc, char **argv) {
    char *str1  = "Hello World! I'm string 1.";
    char str2[] = "Hello World! I'm string 2.";
    char newstring1[500];
    char newstring2[500];
    printf("Hello World!\n");  /* string type is defined by the double quotes */
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("Print a backslash \\ \n");
    printf("%s has length %d bytes\n", str1, get_string_length(str1));
    printf("%s has length %d bytes\n", str2, strlen(str2));
    copy_string(str1, newstring1);
    strcpy(newstring2, str2);
    printf("%s\n", newstring1);
    printf("%s\n", newstring2);
}