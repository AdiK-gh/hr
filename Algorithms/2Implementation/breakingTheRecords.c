// Maria plays n games of college basketball in a season. Because she wants to go pro, she tracks her points scored per game sequentially in an array defined as score = {s0, s1, ..., sn-1}. After each game i, she checks to see if score si breaks her record for most or least points scored so far during that season.
//
// Given Maria's array of scores for a season of n games, find and print the number of times she breaks her record for most and least points scored during the season.
//
// Note: Assume her records for most and least points at the start of the season are the number of points scored during the first game of the season.
//
// Input Format
//
// The first line contains an integer denoting n (the number of games).
// The second line contains n space-separated integers describing the respective values of s0, s1, ..., sn-1.
//
// Constraints
// 1 <= n <= 1000
// 0 <= si <= 10^8
//
// Output Format
//
// Print two space-seperated integers describing the respective numbers of times her best (highest) score increased and her worst (lowest) score decreased.
//
// Sample Input 0
//
// 9
// 10 5 20 20 4 5 2 25 1
// Sample Output 0
//
// 2 4
// Explanation 0
//
// The diagram below depicts the number of times Maria broke her best and worst records throughout the season:
//
// Game:   0    1   2   3   4   5   6   7   8
// Score:  10  5   20  20  4   5   2   25  1
// High:   10  10  20  20  20  20  20  25  25
// Low:    10  5   5   5   4   4   2   2   1
//
// She broke her best record twice (after games 2 and 7) and her worst record four times (after games 1, 4, 6, and 8), so we print 2 4 as our answer. Note that she did not break her record for best score during game 3, as her score during that game was not strictly greater than her best record at the time.
//
// Sample Input 1
//
// 10
// 3 4 21 36 10 28 35 5 24 42
// Sample Output 1
//
// 4 0
// Explanation 1
//
// The diagram below depicts the number of times Maria broke her best and worst records throughout the season:
//
// Game:   0    1   2   3   4   5   6   7   8  9
// Score:  3   4   21  36  10  28  35  5   24  42
// High:   3   4   21  36  36  36  36  36  36  42
// Low:    3   3   3   3   3   3   3   3   3   3
//
// She broke her best record four times (after games 1, 2, 3, and 9) and her worst record zero times (no score during the season was lower than the one she earned during her first game), so we print 4 0 as our answer.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* getRecord(int s_size, int* s, int *result_size){
    // Complete this function
    int *result = malloc(sizeof(int) * 2);
    int max = s[0], min = s[0];
    //result[0] stores how many times the max value encountered so far has been broken
    //result[1] stores how many times the min value encountered so far has been broken
    for(int i = 0; i < s_size; i++){
        if(s[i] < min){
            result[1]++;
            min = s[i];
        }
        if(max < s[i]){
            result[0]++;
            max = s[i];
        }
    }
    return result;
}

int main() {
    int n;
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int result_size;
    int* result = getRecord(n, s, &result_size);
    for(int i = 0; i < 2; i++) {
        if (i) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    puts("");
    return 0;
}
