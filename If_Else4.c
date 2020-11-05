//4.Find whether given character is alphabate or number:

#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a charecter other than special chararecter:");
  scanf("%c",&ch);
  
  if((ch>='A' && ch<='Z')||(ch>='a'&&ch<='z'))
   printf("The entered character is alpabate");
   
  else
   printf("The entered character is number");
   
  return 0;
 } 
   
  
