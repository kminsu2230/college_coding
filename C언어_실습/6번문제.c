/**********************************
1301035 ��μ�
371p 6������
*********************************/

#include<stdio.h>								 //�����������

int get_tri_number(int n);						 //�Լ� ����

int main(void)									 //�����Լ�����

{
 int n, sum=0;
 while(1)
 {
  printf("���° �ﰢ�Լ����� ���Ͻðڽ��ϱ�? :"); //�Է¾ȳ���
  scanf("%d",&n);								   //�Է¹�

  sum=get_tri_number(n);						   //sum���� ����

  printf("%d��° �ﰢ�Լ��� %d\n",n,sum);			//��¹�
 } //��¹�

 return 0;
}

int get_tri_number(int n) 

{
 if(n<=1)
  return 1;
 else
  return n+get_tri_number(n-1);						//��ȯ ȣ���� ����

}