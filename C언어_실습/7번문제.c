/**********************************
1301035 ��μ�
371p 7������
*********************************/

#include <stdio.h>										//�����������

int recursive(int n, int k)								//��ȯ�Լ�
{
 if( n==1 || n ==k) return 1;						    // n=1�̰ų� n=k�������� ����1
 else return recursive(n-1, k-1) + recursive(n-1, k);   // �ƴϸ� n-1,k-1 + n-1,k���� ���� �� ����
}

int main(void)											//�����Լ�����
{
 int a,b;
 
 printf("���� �Է����ּ��� (-, -)");					//���� �Է¹޴� �ȳ���
 scanf("%d %d",&a,&b);									//���� �Է¹���

 printf("%d\n", recursive(a,b));						//��¹�
 return 0;
}
