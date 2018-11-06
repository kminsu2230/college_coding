/**********************************
1301035 김민수
371p 5번문제
*********************************/

#include<stdio.h>										//헤더파일포함

int save(int amount);									//저금변수
int draw(int amount);									//예금인출변수
static int money=5000;									 //전역변수선언

void main()
{
 int c;
 int amount;

 while(1)
 {
  printf("메뉴를 선택하세요 저축(1),인출(2):");			//입력안내메시지
  scanf("%d",&c);										//사용자로부터 입력

  switch(c){
   case 1:
    printf("저축할 금액:");								 //입력안내메시지
    scanf("%d",&amount);								//사용자로부터 입력
    save(amount);
    break;

   case 2:
    printf("인출할 금액을 입력하시오:");				//입력안내메시지
    scanf("%d",&amount);								//사용자로부터 입력
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
 printf("현재 잔액은 %d입니다.\n",money);				//출력문
}

int draw(int amount)
{
 money=money-amount;
 printf("현재잔액은 %d입니다.\n",money);				 //출력문
}

//영준이형껄 참고