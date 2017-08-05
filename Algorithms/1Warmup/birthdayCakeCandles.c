// Colleen is turning n years old! She has n candles of various heights on her cake, and candle i has height height[i]. Because the taller candles tower over the shorter ones, Colleen can only blow out the tallest candles.
//
// Given the height[i] for each individual candle, find and print the number of candles she can successfully blow out.
//
// Input Format
//
// The first line contains a single integer, n, denoting the number of candles on the cake.
// The second line contains n space-separated integers, where each integer i describes the height of candle i.
//
// Constraints
// 1 <= n <= 10^5
// 1 <= height[i] <= 10^7
//
// Output Format
//
// Print the number of candles Colleen blows out on a new line.
//
// Sample Input 0
//
// 4
// 3 2 1 3
// Sample Output 0
//
// 2
// Explanation 0
//
// We have one candle of height 1, one candle of height 2, and two candles of height 3. Colleen only blows out the tallest candles, meaning the candles where height = 3. Because there are 2 such candles, we print 2 on a new line.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, max = 0, maxCount = 0;
    scanf("%d",&n);
    int *height = malloc(sizeof(int) * n);
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
       if(max < height[height_i]){
           max = height[height_i];
       }
    }

    for(int height_i = 0; height_i < n; height_i++){
        if(height[height_i] == max)
            maxCount++;
    }

    printf("%d\n", maxCount);

    return 0;
}
