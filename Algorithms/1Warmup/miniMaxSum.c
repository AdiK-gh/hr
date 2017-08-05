// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
//
// Input Format
//
// A single line of five space-separated integers.
//
// Constraints
//
// Each integer is in the inclusive range [1, 10^9].
// Output Format
//
// Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than 32 bit integer.)
//
// Sample Input
//
// 1 2 3 4 5
// Sample Output
//
// 10 14
// Explanation
//
// Our initial numbers are 1, 2, 3, 4, and 5. We can calculate the following sums using four of the five integers:
//
// If we sum everything except 1, our sum is 14.
// If we sum everything except 2, our sum is 13.
// If we sum everything except 3, our sum is 12.
// If we sum everything except 4, our sum is 11.
// If we sum everything except 5, our sum is 10.
// As you can see, the minimal sum is 1 + 2 + 3 + 4 = 10 and the maximal sum is 2 + 3 + 4 + 5 = 14. Thus, we print these minimal and maximal sums as two space-separated integers on a new line.
//
// Hints: Beware of integer overflow! Use 64-bit Integer.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }

    int i = 0;
    long long int max = 1, min = pow(2, 60), sum = 0, maxIndex, minIndex;
    for(i = 0; i < 5; i++){
        if(max < arr[i]){
            max = arr[i];
            maxIndex = i;
        }

        if(min > arr[i]){
            min = arr[i];
            minIndex = i;
        }
        sum += arr[i];
    }

    printf("%lld %lld\n", sum - arr[maxIndex], sum - arr[minIndex]);

    return 0;
}
