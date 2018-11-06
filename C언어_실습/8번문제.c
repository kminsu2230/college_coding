/**********************************
1301035 김민수
371p 8번문제
*********************************/

#include<stdio.h>								 //헤더파일포함

int show_digit(int x);							// 보여줄 함수선언

int main(void)									 //메인함수선언
{
 int x;

 printf("정수를 입력하시오: ");					 //입력 안내문
 scanf("%d",&x);								 //입력문

 show_digit(x);									 // 함수 호출
}

int show_digit(int x)							 //정수x를 10으로 나눈 값

{
 if(x<10)										 //10보다 작을 경우 
  return printf("%2d",x);
 else
  show_digit(x/10);								 //아닌경우 순환호출

 return printf("%2d", x%10);					 //리턴하여 나머지값을 반환
}
