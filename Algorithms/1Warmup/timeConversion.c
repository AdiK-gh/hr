// Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
//
// Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.
//
// Input Format
//
// A single string containing a time in 12-hour clock format (i.e.: hh:mm:ssAM or hh:mm:ssPM), where 0 <= hh <= 12 and 00 <= mm, ss <= 59.
//
// Output Format
//
// Convert and print the given time in 24-hour format, where 00 <= hh <= 23.
//
// Sample Input
//
// 07:05:45PM
// Sample Output
//
// 19:05:45

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    // char* time = (char *)malloc(10240 * sizeof(char));
    // scanf("%s",time);

    int h = 0, m = 0, s = 0;
    char c[2];
    scanf("%d:%d:%d%s", &h, &m, &s, c);

    if(!strcmp(c, "PM") && h != 12)
        h += 12;
    if(!strcmp(c, "AM") && h == 12)
        h = 0;

    printf("%02d:%02d:%02d", h, m, s);


    return 0;
}
