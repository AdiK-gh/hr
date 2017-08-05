// HackerLand University has the following grading policy:
//
// Every student receives a grade in the inclusive range from 0 to 100.
// Any grade less than 40 is a failing grade.
// Sam is a professor at the university and likes to round each student's grade according to these rules:
//
// If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
// If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
// For example, grade = 84 will be rounded to 85 but grade = 29 will not be rounded because the rounding would result in a number that is less than 40.
//
// Given the initial value of grade for each of Sam's n students, write code to automate the rounding process. For each ,grade round it according to the rules above and print the result on a new line.
//
// Input Format
//
// The first line contains a single integer denoting n (the number of students).
// Each line i of the n subsequent lines contains a single integer, gradei, denoting student i's grade.
//
// Constraints
// 1 <= n <= 60
// 0 <= gradei <= 100
//
// Output Format
//
// For each gradei of the n grades, print the rounded grade on a new line.
//
// Sample Input 0
//
// 4
// 73
// 67
// 38
// 33
//
//
// Sample Output 0
//
// 75
// 67
// 40
// 33
//
//
// Explanation 0
//
// Student 1 received a 73, and the next multiple of 5 from 73 is 75. Since 75 - 73 < 3, the student's grade is rounded to 75.
// Student 2 received a 67, and the next multiple of 5 from 67 is 70. Since 70 - 67 = 3, the grade will not be modified and the student's final grade is 67.
// Student 3 received a 38, and the next multiple of 5 from 38 is 40. Since 40 - 38 < 3, the student's grade will be rounded to 40.
// Student 4 received a grade below 38, so the grade will not be modified and the student's final grade is 33.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades, int *result_size){
    // Complete this function
    int i = 0;
    for(i = 0; i < grades_size; i++)
        if(grades[i] % 5 >= 3 && grades[i] >= 38)
            grades[i] = grades[i] + (5 - grades[i] % 5);

    result_size = &grades_size;
    return grades;
}

int main() {
    int n;
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d", &grades[grades_i]);
    }
    int result_size;
    int* result = solve(n, grades, &result_size);
    for(int result_i = 0; result_i < n; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
