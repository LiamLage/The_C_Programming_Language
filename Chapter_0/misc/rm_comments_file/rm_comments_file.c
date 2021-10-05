/* Author: Liam Lage
 * 04/10/2021
 *
 * Added file handling to C\Chapter_1\Exercise_1-22\rm_comments.c
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000

int main(void)  {
    int i, c, j, x, length;
    char s[MAX_SIZE];
    char sourcePath[100];
    char destPath[100];
    FILE *sourceFile;
    FILE *destFile;

    // input path of files to copy
    printf("Enter source file path:\n");
    scanf("%s", sourcePath);
    printf("Enter destination file path:\n");
    scanf("%s", destPath);

    sourceFile = fopen(sourcePath, "r");    // open source file in 'r' mode
    destFile   = fopen(destPath, "w");      // open dest file in 'w' mode

    // fopen() return null if unable to open file in given mode
    if (sourceFile == NULL || destFile == NULL) {
        printf("\nUnable to open file.\n");
        printf("Please check that path was entered correctly, file exists and you have rw privilege.\n");
    }

    for (j = 0, x = 0; (c = fgetc(sourceFile)) != EOF; ++j) {
        if (j < MAX_SIZE - 1)
            s[x++] = c;
    }
    s[x] == '\0';
    length = x;
    i = 0;
    while (length > 0) {
        while (s[i] != '\0') {
            if (s[i] == '/' && s[i+1] == '/') {
                while (s[i] != '\n' && s[i] != '\0')
                    ++i;
            } else if (s[i] == '/' && s[i+1] == '*') {
                while (s[i] == '*' || s[i] != '*' && s[i+1] != '/' && s[i] != '\0')
                        ++i;
            } else if (s[i] == '/' && (s[i+1] != '/' || s[i+1] != '*')) {
                fputc('/', destFile);
                ++i;
            } else {
                fputc(s[i++], destFile);
            }
        }
    }
    return 0;
}








/*
int main(void)  {
    char str[] = "This is a test";  // These are some comments
    printf("%s\n", str);
    return 0;


}
*/