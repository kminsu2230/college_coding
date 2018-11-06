/**********************************
1301035 김민수
371p 4번문제
*********************************/

#include <stdio.h>								//헤더파일포함
#include <stdlib.h>								 //난수함수헤더
#include <time.h>							 //시간헤더

double recursive(int n)  

{ 
 if ( n <= 1 ) 
  return 1.0; 
 return ( 1.0 / (double)n + recursive(n-1) );	//무한수열 계산식 
} 

int main()										//메인함수선언
{ 
 int i; 
 for ( i = 1; i <= 9; ++i ) 

  printf("1/%d + ", i);							//출력문

 printf("1/10 = %.2lf\n", recursive(10));		 //출력문
 return 0; 

} 

