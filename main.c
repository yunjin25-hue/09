#include <stdio.h>
#include <stdlib.h>
#define SIZE 3 //���ڰ� ������ �ǹ��ϴ��� �˷��� �� ����, ���� �ٲ� ���� ����  

int main(int argc, char *argv[])
{
  
  //�ǽ� 2
  
  int i;
  int sum=0;
  int score[SIZE]; //������ �� SIZE=5  
  
  //���� �Է� 
  printf("%i�� ������ �Է��ϼ���\n",SIZE);
  
  for(i=0; i<SIZE; i++)
  {
    scanf("%d",&score[i]); 
    sum+=score[i];
  }
  
  //���� ȭ�� ���(�ݺ��� Ȱ��) 
  #if 1 //����ϰ� ������ 0-->1�� �ٲٱ�  
  for(i=0; i<SIZE; i++)
   printf("grade[%i] = %i\n",i,score[i]);
  #endif //��� ���� ���  
  
  printf("���� ��� : %d\n",sum/SIZE); 
            
  system("PAUSE");	
  return 0;
}

