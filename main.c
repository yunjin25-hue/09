#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 //���ڰ� ������ �ǹ��ϴ��� �˷��� �� ����, ���� �ٲ� ���� ����  

int main(int argc, char *argv[])
{
  
  //�ǽ� 3
  
  //SIZE ũ�� �迭 ����  
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
  
  //���� �Է� 
  for(i=0; i<SIZE; i++)
  {
    grade[i]=rand() % 100; //0~99������ ���� ����  
  }
  
  for(i=0; i<SIZE; i++)
   score[i]=grade[i]; 
    
  //���� ȭ�� ���(�ݺ��� Ȱ��) 
  #if 1 
  for(i=0; i<SIZE; i++)
   printf("grade[%i]=%i, score[%i] = %i\n",i,score[i]);
  #endif
  */
