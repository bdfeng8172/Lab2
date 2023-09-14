#include <stdio.h>
#include <math.h>
#include "asgn2.h"

int main() {
        float length, width, height;

    printf("Enter length ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    printf("Enter height: ");
    scanf("%f", &height);

    int gallons = paintGallons(length, width, height);

    printf("You need %d gallon(s) of paint.\n", gallons);

    float avg_exams, avg_hw;
    int attendance;

    printf("Average exam score? ");
    scanf("%f", &avg_exams);//these pose a question then record the values that are given as a response

    printf("Average homework score? ");
    scanf("%f", &avg_hw);

    printf("Attendance count: ");
    scanf("%d", &attendance);

    grader(avg_exams, avg_hw, attendance);


    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0) {
        cubeOfOdd(n);
        introToCS330(n);
        printHELLO(n);
    } else {
        printf("Please enter a non-negative integer.\n");
    }

    return 0;
  } 
