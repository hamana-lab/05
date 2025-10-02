#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int number, i, sum=0;
  
  printf("Input a number:");
  scanf("%i",&number);
  
  for (i=1;i<=number;i++)
      sum = sum+i;
      
  printf("The result is %i\n", sum);
  
   
  system("PAUSE");	
  return 0;

}
