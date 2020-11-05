//5.Find weather given year is leap year or not:

#include<stdio.h>
int main()
{
  int year;
  printf("Enter the year:");
  scanf("%d",&year);
  
  if(year%4==0)
   printf("\nThe year is a leap year!");
   
  else
   printf("\nThe year is not a leap year!");
   
  return 0;
 
 } 
