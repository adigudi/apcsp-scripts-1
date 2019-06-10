#include <stdio.h>
//#include "finalprojectNathan.h"
 
void averageGrade(struct Student* student)
{
    int n, i;
    float num[100], sum = 0.0, average;

    for(i = 0; i < n; ++i)
    {
        sum = sum + &students[i].gradepercent;
    }

    average = sum / n;
    if((average >= 90 && average <= 100) || average > 100)
    {
	printf("Grade: A\n");
    }
    if(average >= 80 && average < 90)
    {
        printf("Grade: B\n");
    }
    if(average >= 70 && average < 80)
    {
        printf("Grade: C\n");
    }
    if(average >= 60 && average < 70)
    {
        printf("Grade: D\n");
    }
    if(average < 60){
	printf("Grade: F\n");
    }
    printf("Average = %.2f\n", average);
}
