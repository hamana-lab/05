#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int number1,number2,result;
  char operator;
  
  printf("Enter the calculation:");
  scanf("%i %c %i",&number1, &operator, &number2);
  
  if (operator == '+')
   result = number1+number2;
  else if(operator == '-')
   result = number1-number2;
  else if(operator == '/')
   result = number1/number2;
  else if(operator == '*')
   result = number1*number2;
      
  printf("=%d\n", result);
  
   
  system("PAUSE");	
  return 0;

}
