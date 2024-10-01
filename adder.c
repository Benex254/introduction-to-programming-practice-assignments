/* A c program that computes the sum using an appropriate format? */
#include "stdio.h"
#include "stdlib.h"

int main(void) {
  double a;
  double b;
  char operation;
  char *user = getenv("USERNAME");
  char still_wants_to_do_arithmetics = 'y';

  printf("----------------------------\n");
  printf("How are you %s\n", user);
  printf("Its a fine day to do some arithmetics with a c program\n");
  printf("----------------------------\n");
  do {
    printf("Enter a number: ");
    scanf(" %lf", &a);
    printf("Enter a number: ");
    scanf(" %lf", &b);
    printf("Enter the operation you want to perform ( +, -, *, / ): ");
    scanf(" %c", &operation);

    printf("\n-------------------------------\n\n");
    switch (operation) {
    case '+':
      printf("%0.2lf + %0.2lf = %0.2lf\n", a, b, (a + b));
      break;
    case '-':
      printf("%0.2lf - %0.2lf = %0.2lf\n", a, b, (a - b));
      break;
    case '*':
      printf("%0.2lf * %0.2lf = %0.2lf\n", a, b, (a * b));
      break;
    case '/':
      if (b == 0) {
        printf("Error!! attempt to divide by zero\n");
      } else {
        printf("%0.2lf / %0.2lf = %0.2lf\n", a, b, (a / b));
      }
      break;
    default:
      printf("Invalid operation %c\n", operation);
    }
    printf("\n-------------------------------\n");
    printf("Do you still want to do some arithmetics: ");
    scanf(" %c", &still_wants_to_do_arithmetics);
  } while (still_wants_to_do_arithmetics == 'y');

  printf("----------------------------\n");
  printf("Have a good day %s\n", user);
  printf("----------------------------\n");
  return 0;
}
