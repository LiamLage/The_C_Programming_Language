/* Author: Liam Lage
 * 29/10/2021
 * 
 * Solution for Exercise 3-2.
 * 
 * Write a function escape(s,t) that converts characters like newline and tab into
 * visible escape sequences like \n and \t as it copies the string t to s. Use a
 * switch. Write a function for the other direction as well, converting escape
 * sequences into the real characters.
 */
#include <stdio.h>
#define LIM 1000

void escape(char s[], char t[]);
void reverse_escape(char s[], char t[]);
int usr_input(char s[], int lim);

// main: call usr_input, escape & reverse_escape
int main(int argc, char *argv[]) {
    char s[LIM], t[LIM], m[LIM], n[LIM];
    
    // fill all the arrays with 0
    for (int i = 0; i < LIM; i++) {
        s[i] = 0;
        t[i] = 0;
        n[i] = 0;
        m[i] = 0;
    }

    usr_input(t, LIM);
    escape(s, t);
    printf("escape result:\n%s\n\n", s);

    usr_input(n, LIM);
    reverse_escape(m, n);
    printf("reverse result:\n%s\n", m);

    return 0;
}


/* escape: convert characters like newline & tab into
            visible escape sequences like \n & \t.*/
void escape(char s[], char t[]) {
    int i, j;
    i = j = 0;

    while (t[i] != '\0') {
        switch (t[i]) {
            case '\t':          // is a tab
                s[j] = '\\';    // print a backslash
                j++;            // advance one step in the array
                s[j] = 't';     // print a 't'
                break;
            case '\n':
                s[j] = '\\';
                j++;
                s[j] = 'n';
                break;
            default:
                s[j] = t[i];
        }
        ++i;
        ++j;
    }
    s[j] = '\0';                // NULL terminate
}


/* reverse_escape: converts escape sequences 
                    ino real characters. */
void reverse_escape(char s[], char t[]) {
    int i, j;
    i= j = 0;

    while (t[i] != '\0') {
        switch(t[i]) {
            case '\\':                  // there is a backslash
                if (t[i+1] == 't')      // the letter following the backslash is 't'
                    s[j] = '\t';        // insert '\t' character
                else if (t[i+1] == 'n') // the letter following the backslash is 'n'
                    s[j] = '\n';        // insert '\n' character
                i++;
                break;
            default:                    // if the cases above are not satisfied
                s[j] = t[i];            // simply copy s to t
        }
        j++;
        i++;
    }
    s[j] = '\0';                        // NULL terminate
}


// usr_input: get user input and save it in a string
int usr_input(char s[], int lim) {
    int i, c;

    printf("Enter characters, press 'Ctrl+z' once complete:\n"); // prompt user
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF; i++)
        s[i] = c;
    s[i] = '\0';
}

/*
Tests:

this        is a string with
newlines and        tabs        and
more newlines       and more tabs

this\tis a string with\nnewlines and\ttabs\tand\nmore newlines\tand more tabs
*/