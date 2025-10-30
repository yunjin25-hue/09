#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  //실습 1
  
  //5명의 학생에 대한 시험성적 저장 배열 선언 
   
   int score[5];
   int i;
   
   score[0]=10;
   score[1]=20;
   score[2]=30;
   score[3]=40;
   score[4]=50;
   
   for(i=0; i<5; i++)
   {
     printf("grade[%i] = %i\n",i,score[i]);
   }
            
  
  system("PAUSE");	
  return 0;
}
