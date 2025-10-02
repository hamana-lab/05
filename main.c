#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  printf("Input an integer:");
  scanf("%d", &num);
  
  if (num>=0)
   printf("Absolute value is %d\n", num);
  else
   printf("Absolute value is %d\n", -num);
    
  system("PAUSE");	
  return 0;
}
