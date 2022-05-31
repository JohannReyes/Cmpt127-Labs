#include <stdio.h>
#include <math.h>

int main(void) {

  double n;
  int check;

  printf("Please enter a number: ");
  check = scanf( "%lf", &n );

  if(check == 0)
  {
    printf("Input is invalid\n");
  }
  else
  {
    printf("The largest integer smaller than or equal to this number: %d\nThe nearest integer to this number, with halfway values rounded away from zero: %d\nThe smallest integer larger than or equal to this number: %d\n", (int)floor(n), (int)round(n), (int)ceil(n));
  }

  return 0;
}
