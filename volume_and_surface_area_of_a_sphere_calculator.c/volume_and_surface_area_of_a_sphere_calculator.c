// write a program that calculates the volume and surface area of a sphere given
// its radius?
#include "math.h"
#include "stdio.h"
int main() {
  const double PI = M_PI;
  double radius;
  printf(""
         ""
         "\n");
  printf(
      "Welcome to SpherePhobia\nYour all in one solution to sphere problems\n");
  printf(""
         ""
         "\n");
  printf("Enter the radius of that sphere thats giving you trouble: ");
  scanf("%lf", &radius);
  printf(""
         ""
         "\n");
  printf("The Volume of your sphere of radius %lf is: %lf\n", radius,
         4.0 / 3.0 * PI * radius * radius * radius);
  printf(""
         ""
         "\n");
  printf("The Surface Area of your sphere of radius %lf is: %lf\n", radius,
         4.0 * PI * radius * radius);
  printf(""
         ""
         "\n");
  return 0;
}
