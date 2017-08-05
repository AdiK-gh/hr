// Given an array of N integers, can you find the sum of its elements?
//
// Input Format
//
// The first line contains an integer, N, denoting the size of the array.
// The second line contains N space-separated integers representing the array's elements.
//
// Output Format
//
// Print the sum of the array's elements as a single integer.
//
// Sample Input
//
// 6
// 1 2 3 4 10 11
// Sample Output
//
// 31
// Explanation
//
// We print the sum of the array's elements, which is: 1 + 2 + 3 + 4 + 10 + 11.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, sum = 0;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       sum += arr[arr_i];
    }
    printf("%d\n", sum);
    return 0;
}
