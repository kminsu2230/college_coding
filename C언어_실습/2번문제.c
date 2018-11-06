/**********************************
1301035 김민수
371p 2번문제
*********************************/

#include <stdio.h>							    //헤더파일포함
#include <stdlib.h>								//난수함수헤더
#include <time.h>								//시간헤더

unsigned int get_dice_face()					//주사위를 던지는 함수

{ 
 static unsigned int count = 0;				    //정적지역변수사용
 static int dice[6] = {0,}; 
 int i; 
 int r = rand() % 6;							//주사위면 0~5까지 정수로 표현, 0부터 5까지 난수는 rand()%6으로 생성

 dice[r]++;										//주사위의 단면횟수를 배열 값에 저장

 count++;										//카운트

 if(count%100==0) 
 { 
  for(i=0; i<6; i++) 
  { 
   printf(" %d ", dice[i]);						//100 배수일때마다 면이 나온횟수 출력 
  } 
  printf("\n"); 
 } 
 return count;									//카운트 값을 다시 리턴 
} 

int main()									    //메인함수선언

{ 
 int i; 

 srand(time(0));								//초기화
 for(i=0; i<1000; i++)							//반복할 횟수

 { 
  get_dice_face(); 
 } 

 return 0; 

} 
