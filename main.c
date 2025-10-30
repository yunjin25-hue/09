#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 //숫자가 무엇을 의미하는지 알려줄 수 있음, 숫자 바꿀 때도 용이  

int main(int argc, char *argv[])
{
  
  //실습 3
  
  //SIZE 크기 배열 선언  
  int i;
  int a[SIZE]={1,2,3,4,5,};
  int b[SIZE]={1,2,3,4,5,};
  int flag_same=1;
  
  for(i=0; i<SIZE; i++)
  {
    if(a[i] != b[i])
    { 
      printf("%i-the element is diff.\n",i);
      flag_same=0;
    }
  }
  
  printf("Are a and b the same? %i\n", flag_same);     
  
  system("PAUSE");	
  return 0;
}

/*int i;
  int grade[SIZE];
  int score[SIZE]; 
  
  //점수 입력 
  for(i=0; i<SIZE; i++)
  {
    grade[i]=rand() % 100; //0~99까지의 값만 나옴  
  }
  
  for(i=0; i<SIZE; i++)
   score[i]=grade[i]; 
    
  //점수 화면 출력(반복문 활용) 
  #if 1 
  for(i=0; i<SIZE; i++)
   printf("grade[%i]=%i, score[%i] = %i\n",i,score[i]);
  #endif
  */
