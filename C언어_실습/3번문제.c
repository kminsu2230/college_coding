/**********************************
1301035 ��μ�
371p 3������
*********************************/



#include <stdio.h> //�����������
#include <stdlib.h> //�����Լ����
#include <time.h> //�ð����

int get_random(void); //�ܼ��� ���� ���� ��ȯ

int main(void) //�����Լ�����
{
 printf("%d\n", get_random()); //��¹�
 printf("%d\n", get_random()); //��¹�
 printf("%d\n", get_random()); //��¹�

 return 0;
}

int get_random ()  //ó������ ȣ��Ǵ� ��� s(rand) ȣ���� ���� �õ� �ʱ�ȭ
{
 static int inited=0; //������������

 if( inited == 0 )
 {
  printf("�ʱ�ȭ\n"); //��¹�
  srand((unsigned)time(NULL));
  inited = 1;
 }
 return rand();
}
