#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int answer=59, input, trial=0;

  do{
      
   printf("Guess a number :");    
   scanf("%i",&input);
   trial++;
   
   if (input > answer)
    printf("high!\n");
   else if (input < answer)
    printf("low!\n");
   }while(input!=answer);
  
  printf("Congratulation! trial:%d\n",trial);
    
  system("PAUSE");	
  return 0;

}
