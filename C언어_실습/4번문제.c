/**********************************
1301035 ��μ�
371p 4������
*********************************/

#include <stdio.h>								//�����������
#include <stdlib.h>								 //�����Լ����
#include <time.h>							 //�ð����

double recursive(int n)  

{ 
 if ( n <= 1 ) 
  return 1.0; 
 return ( 1.0 / (double)n + recursive(n-1) );	//���Ѽ��� ���� 
} 

int main()										//�����Լ�����
{ 
 int i; 
 for ( i = 1; i <= 9; ++i ) 

  printf("1/%d + ", i);							//��¹�

 printf("1/10 = %.2lf\n", recursive(10));		 //��¹�
 return 0; 

} 

