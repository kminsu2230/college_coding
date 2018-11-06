/**********************************
1301035 김민수
371p 7번문제
*********************************/

#include <stdio.h>										//헤더파일포함

int recursive(int n, int k)								//순환함수
{
 if( n==1 || n ==k) return 1;						    // n=1이거나 n=k랑같을때 리턴1
 else return recursive(n-1, k-1) + recursive(n-1, k);   // 아니면 n-1,k-1 + n-1,k값을 더한 후 리턴
}

int main(void)											//메인함수선언
{
 int a,b;
 
 printf("값을 입력해주세요 (-, -)");					//값을 입력받는 안내문
 scanf("%d %d",&a,&b);									//값을 입력받음

 printf("%d\n", recursive(a,b));						//출력문
 return 0;
}
