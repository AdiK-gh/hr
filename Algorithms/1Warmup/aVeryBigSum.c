// You are given an array of integers of size N. You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.
//
// Input Format
//
// The first line of the input consists of an integer N. The next line contains N space-separated integers contained in the array.
//
// Output Format
//
// Print a single value equal to the sum of the elements in the array.
//
// Constraints
// 1 < N < 10
// 0 <= A[i] <= 10^10
//
// Sample Input
//
// 5
// 1000000001 1000000002 1000000003 1000000004 1000000005
// Output
//
// 5000000015
// Note:
//
// The range of the 32-bit integer is (-2^31) to (2^31 - 1).
// When we add several integer values, the resulting sum might exceed the above range. You might need to use long long int in C/C++ or long data type in Java to store such sums.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, i;
    double sum;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    for(i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("%.0lf", sum);
    return 0;
}
