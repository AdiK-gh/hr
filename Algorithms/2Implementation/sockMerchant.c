// John works at a clothing store and he's going through a pile of socks to find the number of matching pairs. More specifically, he has a pile of n loose socks where each sock  is labeled with an integer, ci, denoting its color. He wants to sell as many socks as possible, but his customers will only buy them in matching pairs. Two socks,  and i, j are a single matching pair if they have the same color (ci = cj).
//
// Given n and the color of each sock, how many pairs of socks can John sell?
//
// Input Format
//
// The first line contains an integer, n, denoting the number of socks.
// The second line contains n space-separated integers describing the respective values of c0, c1, c2, ..., cn-1.
//
// Constraints
// 1 <= n <= 100
// 1 <= ci <= 100
//
// Output Format
//
// Print the total number of matching pairs of socks that John can sell.
//
// Sample Input
//
// 9
// 10 20 20 10 10 30 50 10 20
// Sample Output
//
// 3
// Explanation
//
// sock.png
//
// As you can see from the figure above, we can match three pairs of socks. Thus, we print  on a new line.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sockMerchant(int n, int* ar) {
    // Complete this function

    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(ar[i] == ar[j] && ar[i] > 0){
                // once a pair is found, set their respective values to 0 to avoid further matches
                ar[i] = ar[j] = 0;
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    return 0;
}
