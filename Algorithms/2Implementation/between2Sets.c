// Consider two sets of positive integers, A = {a0, a1, ..., an-1} and B = {b0, b1, ..., bm-1}. We say that a positive integer, x, is between sets A and B if the following conditions are satisfied:
//
// All elements in A are factors of x.
// x is a factor of all elements in B.
// In other words, some x is between A and B if that value of x satisfies x % ai = 0 for every ai in A and also satisfies bi % x = 0 for every bi in B. For example, if A = {2, 6} and B = {12}, then our possible x values are 6 and 12.
//
// Given A and B, find and print the number of integers (i.e., possible x's) that are between the two sets.
//
// Input Format
//
// The first line contains two space-separated integers describing the respective values of n (the number of elements in set A) and m (the number of elements in set B).
// The second line contains n distinct space-separated integers describing a0, a1, ..., an-1.
// The third line contains m distinct space-separated integers describing b0, b1, ..., bm-1.
//
// Constraints
// 1 <= n,m <= 10
// 1 <= ai <= 100
// 1 <= bi <= 100
//
// Output Format
//
// Print the number of integers that are considered to be between A and B.
//
// Sample Input
//
// 2 3
// 2 4
// 16 32 96
//
// Sample Output
//
// 3
//
// Explanation
//
// There are three x values between A = {2, 4} and B = {16, 32, 96}:
//
// x = 4:
// All the elements in A evenly divide x = 4.
// x = 4 evenly divides all the elements in B.
// x = 8:
// All the elements in A evenly divide 8.
// x = 8 evenly divides all the elements in B.
// x = 16:
// All the elements in A evenly divide x.
// x evenly divides all the elements in B.
// Thus, we print 3 as our answer.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int getTotalX(int a_size, int* a, int b_size, int* b){
    // Complete this function

    int count = 0, i = 0, j = 0;

    for(int x = a[a_size - 1]; x <= b[0]; x++){
        // for(i = 0; i < a_size; i++){
        //     if((x % a[i] == 0) && (b[i] % x == 0))
        //         count++;
        // }
        int sum_mod = 0;
        for(int j = 0; j < a_size; j++){
            sum_mod += x % a[j];
        }
        for(int k = 0; k < b_size; k++){
            sum_mod += b[k] % x;
        }
        if(sum_mod == 0)
            count++;
    }
    return count;

}

int main() {
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }

    int *b = malloc(sizeof(int) * m);
    for(int b_i = 0; b_i < m; b_i++){
       scanf("%d",&b[b_i]);
    }

    int total = getTotalX(n, a, m, b);
    printf("%d\n", total);

    return 0;
}
