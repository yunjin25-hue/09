#include <stdio.h>
#include <stdlib.h>
#define SIZE 4 //숫자가 무엇을 의미하는지 알려줄 수 있음, 숫자 바꿀 때도 용이 
 
void square_array(int a[],int size);
void print_array(int a[],int size);
  

int main(int argc, char *argv[])
{
  //실습 4
  int list[SIZE]={1,2,3,4};
  
  print_array(list,SIZE);
  square_array(list,SIZE);
  print_array(list,SIZE);
    
  system("PAUSE");	
  return 0;
}

void square_array(int a[],int size)
{
  int i;
  
  for(i=0; i<size; i++)
   a[i]=a[i]*a[i];
}

void print_array(int a[],int size)
{
  int i;
  
  for(i=0; i<size; i++)
   printf("%3d",a[i]);
  printf("\n");
}
