/**********************************
1301035 ��μ�
371p 1������
*********************************/

#include <stdio.h> //�����������
int add(int n1, int n2); //����
int sub(int n1, int n2); //����
int mul(int n1, int n2); //����
int div(int n1, int n2); //������

void main() 
{
 int n1, n2, result;							 //��������
 char ch;										 //��������
 while(1){ 
  printf("������ �Է��Ͻÿ�: ");				 //�Է����ޱ����� �ȳ���
  scanf("%d %c %d", &n1, &ch, &n2);			     //�Է����ޱ����� �Է¹�
  switch(ch){									 //���� �̿��� ����ġ�� �°� ���
   case '+':
    result=add(n1, n2);							 //����
    break;
   case '-':
    result=sub(n1, n2);							 //����
    break;
   case '*':
    result=mul(n1, n2);							 //����
    break;
   case '/':
    result=div(n1, n2);                          //������
    break;
  }

  printf("���� ��� : %d\n", result); //��¹�
 
 }
}

int add(int n1, int n2)
{
 static int count;									//������������
 count ++;
 printf("������ �� %d�� ����Ǿ����ϴ�.\n", count); //��¹�
 return n1+n2;
}

int sub(int n1, int n2)
{
 static int count;									//������������
 count ++;
 printf("�E���� �� %d�� ����Ǿ����ϴ�.\n", count); //��¹�
 return n1-n2;
}

int mul(int n1, int n2)
{
 static int count;									//������������
 count ++;
 printf("������ �� %d�� ����Ǿ����ϴ�.\n", count); //��¹�
 return n1*n2;
}

int div(int n1, int n2)
{
 static int count;									  //������������
 count ++; 
 printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count); //��¹�
 return n1/n2;
}

