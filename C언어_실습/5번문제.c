/**********************************
1301035 ��μ�
371p 5������
*********************************/

#include<stdio.h>										//�����������

int save(int amount);									//���ݺ���
int draw(int amount);									//�������⺯��
static int money=5000;									 //������������

void main()
{
 int c;
 int amount;

 while(1)
 {
  printf("�޴��� �����ϼ��� ����(1),����(2):");			//�Է¾ȳ��޽���
  scanf("%d",&c);										//����ڷκ��� �Է�

  switch(c){
   case 1:
    printf("������ �ݾ�:");								 //�Է¾ȳ��޽���
    scanf("%d",&amount);								//����ڷκ��� �Է�
    save(amount);
    break;

   case 2:
    printf("������ �ݾ��� �Է��Ͻÿ�:");				//�Է¾ȳ��޽���
    scanf("%d",&amount);								//����ڷκ��� �Է�
    draw(amount);
    break;

   default:
    return 0;
  }
  printf("\n");
 }
}

int save(int amount)
{
 money = money+amount;
 printf("���� �ܾ��� %d�Դϴ�.\n",money);				//��¹�
}

int draw(int amount)
{
 money=money-amount;
 printf("�����ܾ��� %d�Դϴ�.\n",money);				 //��¹�
}

//���������� ����