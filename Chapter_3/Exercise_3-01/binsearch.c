/* Author: Liam Lage
 * 28/10/2021
 * 
 * Solution to Exercise 3-1.
 * 
 * Our binary search makes two tests inside the loop, when one would suffice (at
 * the price of more tests outside.) Write a version with only one test inside the loop and measure
 * the difference in run-time.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#define MAX 15

int binsearch(int x, int v[], int n);
int other_binsearch(int x, int v[], int n);
int original_binsearch(int x, int v[], int n);


int main(int argc, char *argv[]) {
    long input;                     // the integer value of the user input
    int array[] = {1, 2, 3, 4, 5};  // the array we will search in
    char str[MAX];                  // the string value of the user input
    char *ptr;                      // next non numerical value in usr input, only for strtol
    int n = 5;                      // size of array[]
    clock_t start0, end0;
    clock_t start1, end1;
    clock_t start2, end2;

    printf("Enter number to binsearch: ");  // prompt user
    fgets(str, MAX, stdin);                 // get input
    input = strtol(str, &ptr, 10);          // convert string to int


    start0 = clock();   // start timer 0
    printf("Original binsearch result: %d.\n", original_binsearch(input, array, n));
    end0 = clock();     // stop timer 0

    start1 = clock();   // start timer 1
    printf("binsearch result:          %d.\n", binsearch(input, array, n));
    end1 = clock();     // stop timer 1

    start2 = clock();   // start timer 2
    printf("other_binsearch result:    %d.\n", other_binsearch(input, array, n));
    end2 = clock();     // stop timer 2


    // calculate execution time
    double time_result0 = ((double)end0 - start0);
    double time_result1 = ((double)end1 - start1);
    double time_result2 = ((double)end2 - start2);
    double diff = (time_result0 / time_result1) * 100;
    
    // print results
    printf("original_binsearch execution time:  %fms.\n", time_result0);
    printf("binsearch execution time:           %fms.\n", time_result1);
    printf("other_binsearch execution time:     %fms.\n", time_result2);
    // printf("binsearch is %0.2f%% faster.\n", diff);
    
    return 0;
}

// binsearch: find position of x in v[]
int binsearch(int x, int v[], int n) {
    for (int i = 0; i < n; i++) {       // start at the beginning of v and iterate thorugh
        if (v[i] == x)                  // match found
            return i;
    }
    return -1;      // no match
}


// other_binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]
int other_binsearch(int x, int v[], int n) {
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low < high) {
		mid = (low + high) / 2;
		if (v[mid] < x)
			low = mid + 1;
		else
			high = mid;
	}
	if (v[low] == x)
		return low; // found match
	return -1;      // no match
}


// original_binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]
int original_binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid + 1;
        else if (x > v[mid])
            low = mid + 1;
        else    // match found
            return mid;
    }
    return -1;  // no match
}