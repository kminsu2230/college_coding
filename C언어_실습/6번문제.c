/**********************************
1301035 김민수
371p 6번문제
*********************************/

#include<stdio.h>								 //헤더파일포함

int get_tri_number(int n);						 //함수 선언

int main(void)									 //메인함수선언

{
 int n, sum=0;
 while(1)
 {
  printf("몇번째 삼각함수까지 구하시겠습니까? :"); //입력안내문
  scanf("%d",&n);								   //입력문

  sum=get_tri_number(n);						   //sum값에 저장

  printf("%d번째 삼각함수는 %d\n",n,sum);			//출력문
 } //출력문

 return 0;
}

int get_tri_number(int n) 

{
 if(n<=1)
  return 1;
 else
  return n+get_tri_number(n-1);						//순환 호출을 리턴

}