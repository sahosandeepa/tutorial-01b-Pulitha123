/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
   float mark1=0,mark2=0;
   float sum,avg;
   
   printf("Enter your first subject mark here: ");scanf("%f", &mark1);
   printf("Enter your second sebject mark here: ");scanf("%f", &mark2);
   
   sum=0,avg=0;
   
   sum = mark1 + mark2;
   
   printf("\nAverage of two subjects: %.2f", sum/2);
   
   puts("");
  return 0;
}

