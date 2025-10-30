#include <stdio.h>
#include <stdlib.h>
#define SIZE 3 //숫자가 무엇을 의미하는지 알려줄 수 있음, 숫자 바꿀 때도 용이  

int main(int argc, char *argv[])
{
  
  //실습 2
  
  int i;
  int sum=0;
  int score[SIZE]; //컴파일 시 SIZE=5  
  
  //점수 입력 
  printf("%i명 점수를 입력하세요\n",SIZE);
  
  for(i=0; i<SIZE; i++)
  {
    scanf("%d",&score[i]); 
    sum+=score[i];
  }
  
  //점수 화면 출력(반복문 활용) 
  #if 1 //출력하고 싶으면 0-->1로 바꾸기  
  for(i=0; i<SIZE; i++)
   printf("grade[%i] = %i\n",i,score[i]);
  #endif //출력 막는 기능  
  
  printf("성적 평균 : %d\n",sum/SIZE); 
            
  system("PAUSE");	
  return 0;
}

