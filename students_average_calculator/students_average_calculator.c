// write a program that would be able to calculate the students average
#include "stdbool.h"
#include "stdio.h"
#include "stdlib.h"

int main() {
  double total_score_for_all_students;
  double current_student_mark;
  double total_number_of_students = 0;
  char *userName = getenv("USERNAME");
  printf(""
         ""
         "\n");
  printf("Welcome Back To EvaluateSem %s.\nI guess its end of "
         "semester already 😅.\nLets see what the class got this time?\n",
         userName);
  printf(""
         ""
         "\n");
  while (true) {
    printf("Enter Student Score(input -1 to stop entering marks): ");
    scanf("%lf", &current_student_mark);
    total_score_for_all_students += current_student_mark;
    if (current_student_mark == -1.0) {
      break;
    } else {
      total_number_of_students += 1;
    }
  }
  printf(""
         ""
         "\n");
  printf("No of Students: %.0lf\n", total_number_of_students);
  printf("Total Score for All Students: %.2lf\n", total_score_for_all_students);
  printf(""
         ""
         "\n");
  printf("Average For Your Class: %.2lf\n",
         total_score_for_all_students / total_number_of_students);
  printf(""
         ""
         "\n");
  printf("Have a good day 😄\n");
  printf(""
         ""
         "\n");
  return 0;
}
