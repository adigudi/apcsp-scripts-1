
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 0
#define FALSE 1

struct Student
{
  char firstname[256];
  char lastname[256];
  int sid;
  float gradePercent;
  float totalscore;
  float scoreearned;
  char gradeLetter[256];
};

void printStudent(struct Student* student)
{
  printf("\nFirst Name: %s\n", student->firstname);
  printf("Last Name: %s\n", student->lastname);
  printf("Student ID: %d\n", student->sid);
  printf("Total Assignment Score: %f\n", student->totalscore); 
  printf("Student Score: %f\n", student->scoreearned);
  printf("Grade Percent: %f\n", student->gradePercent);
}

int main()
{
  char input[256];
  char ans;
  struct Student students[256];
  int b = TRUE;
  int count = 0;
  while (b == 0)
  {
    printf("Create New Student (Yes/No)?  ");
    fgets(input, 100, stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "Yes") == 0)
    {
      b = TRUE;
      char firstname[100];
      char lastname[100];
      int sID;
      float gradePercent;
      float totalscore;
      float scoreearned;
      printf("Enter First Name of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%s", firstname);
      printf("Enter Last Name of Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%s", lastname);
      printf("Enter Student ID of Student: ");
      fgets(input, 100, stdin);
      sscanf(input, "%d", &sID);
      printf("Enter Total Score of Assignment:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%f", &totalscore);
      printf("Enter Score Earned by Student:  ");
      fgets(input, 100, stdin);
      sscanf(input, "%f", &scoreearned);
      printf("\n");
      strcpy(students[count].firstname, firstname);
      strcpy(students[count].lastname, lastname);
      students[count].sid = sID;
      students[count].totalscore = totalscore;
      students[count].scoreearned = scoreearned;
      gradePercent = (scoreearned / totalscore * 100.0);
      students[count].gradePercent = gradePercent;
      count++;
    }
    else
    {
      b = FALSE;
      for (int i = 0; i < count; i++)
      {
        printStudent(&students[i]);
      }
    }
  }
  return 0;
}
