/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  double mark1,mark2;
  float avg;
  printf("Enter mark1 and mark2:");
  scanf("%lf%lf",&mark1,&mark2);
  avg=(mark1+mark2)/2;
  printf("Average is:%.2f",avg);

  
  return 0;
}

