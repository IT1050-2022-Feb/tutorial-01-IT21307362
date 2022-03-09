/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1, mark2,total;
   float avg;
   
   printf("Enter marks:");
   scanf("%d %d",&mark1,&mark2);
   
   total=mark1+mark2;
   printf("total is: %d\n",total);
   
   avg=total/2;
   printf("Average is : %d",avg);
   
   
  
  return 0;
}

