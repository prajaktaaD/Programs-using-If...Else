//2.Find whether given charachter is vovel or consonent::

#include<stdio.h>
int main()
{
  char c;
  printf("\nEnter a character:");
  scanf("%c",&c);
  
  if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  printf("The character is vowel");
  
  else
  printf("The character is conconent");
  
  
  return 0;
  
 } 
