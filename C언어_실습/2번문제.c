/**********************************
1301035 ��μ�
371p 2������
*********************************/

#include <stdio.h>							    //�����������
#include <stdlib.h>								//�����Լ����
#include <time.h>								//�ð����

unsigned int get_dice_face()					//�ֻ����� ������ �Լ�

{ 
 static unsigned int count = 0;				    //���������������
 static int dice[6] = {0,}; 
 int i; 
 int r = rand() % 6;							//�ֻ����� 0~5���� ������ ǥ��, 0���� 5���� ������ rand()%6���� ����

 dice[r]++;										//�ֻ����� �ܸ�Ƚ���� �迭 ���� ����

 count++;										//ī��Ʈ

 if(count%100==0) 
 { 
  for(i=0; i<6; i++) 
  { 
   printf(" %d ", dice[i]);						//100 ����϶����� ���� ����Ƚ�� ��� 
  } 
  printf("\n"); 
 } 
 return count;									//ī��Ʈ ���� �ٽ� ���� 
} 

int main()									    //�����Լ�����

{ 
 int i; 

 srand(time(0));								//�ʱ�ȭ
 for(i=0; i<1000; i++)							//�ݺ��� Ƚ��

 { 
  get_dice_face(); 
 } 

 return 0; 

} 
