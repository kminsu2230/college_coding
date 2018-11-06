/**********************************
1301035 김민수
371p 1번문제
*********************************/

#include <stdio.h> //헤더파일포함
int add(int n1, int n2); //덧셈
int sub(int n1, int n2); //뺄셈
int mul(int n1, int n2); //곱셈
int div(int n1, int n2); //나눗셈

void main() 
{
 int n1, n2, result;							 //변수선언
 char ch;										 //변수선언
 while(1){ 
  printf("연산을 입력하시오: ");				 //입력을받기위한 안내문
  scanf("%d %c %d", &n1, &ch, &n2);			     //입력을받기위한 입력문
  switch(ch){									 //값을 이용해 스위치에 맞게 계산
   case '+':
    result=add(n1, n2);							 //덧셈
    break;
   case '-':
    result=sub(n1, n2);							 //뺄셈
    break;
   case '*':
    result=mul(n1, n2);							 //곱셈
    break;
   case '/':
    result=div(n1, n2);                          //나눗셈
    break;
  }

  printf("연산 결과 : %d\n", result); //출력문
 
 }
}

int add(int n1, int n2)
{
 static int count;									//정적지역변수
 count ++;
 printf("덧셈은 총 %d번 실행되었습니다.\n", count); //출력문
 return n1+n2;
}

int sub(int n1, int n2)
{
 static int count;									//정적지역변수
 count ++;
 printf("뺼셈은 총 %d번 실행되었습니다.\n", count); //출력문
 return n1-n2;
}

int mul(int n1, int n2)
{
 static int count;									//정적지역변수
 count ++;
 printf("곱셈은 총 %d번 실행되었습니다.\n", count); //출력문
 return n1*n2;
}

int div(int n1, int n2)
{
 static int count;									  //정적지역변수
 count ++; 
 printf("나눗셈은 총 %d번 실행되었습니다.\n", count); //출력문
 return n1/n2;
}

