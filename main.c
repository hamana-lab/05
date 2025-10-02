#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  printf("Input an integer:");
  scanf("%d", &num);
  
  if (num>0)
   printf("positive number\n");
  else if (num==0)
   printf("It's 0.\n");
  else
   printf("negative number\n");
    
  system("PAUSE");	
  return 0;
}
