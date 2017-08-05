// A flock of n birds is flying across the continent. Each bird has a type, and the different types are designated by the ID numbers 1, 2, 3, 4, and 5.
//
// Given an array of n integers where each integer describes the type of a bird in the flock, find and print the type number of the most common bird. If two or more types of birds are equally common, choose the type with the smallest ID number.
//
// Input Format
//
// The first line contains an integer denoting n (the number of birds).
// The second line contains n space-separated integers describing the respective type numbers of each bird in the flock.
//
// Constraints
// 5 <= n <= 2 * 10^5
// It is guaranteed that each type is 1, 2, 3, 4, or 5.
//
// Output Format
// Print the type number of the most common bird; if two or more types of birds are equally common, choose the type with the smallest ID number.
//
// Sample Input
// 6
// 1 4 4 4 5 3
//
// Sample Output
// 4
//
// Explanation
// The different types of birds occur in the following frequencies:
//
// Type 1: 1 bird
// Type 2: 0 birds
// Type 3: 1 bird
// Type 4: 3 birds
// Type 5: 1 bird
// The type number that occurs at the highest frequency is type 4, so we print 4 as our answer.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);

    int *types = malloc(sizeof(int) * n);
    for(int types_i = 0; types_i < n; types_i++){
       scanf("%d",&types[types_i]);
    }

    int count[] = {0, 0, 0, 0, 0};
    for(int types_i = 0; types_i < n; types_i++){
        count[types[types_i] - 1]++;
    }

    // printf("%d\t%d\t%d\t%d\t%d\n", count[0], count[1], count[2], count[3], count[4]);

    int max = 0, loc = 0;

    for(int i = 0; i < 5; i++){
        if(max < count[i]){
            max = count[i];
            loc = i;
        }
    }

    printf("%d\n", loc + 1);

    return 0;
}
