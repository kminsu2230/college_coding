/**********************************
1301035 김민수
371p 3번문제
*********************************/



#include <stdio.h> //헤더파일포함
#include <stdlib.h> //난수함수헤더
#include <time.h> //시간헤더

int get_random(void); //단순히 난수 생성 반환

int main(void) //메인함수선언
{
 printf("%d\n", get_random()); //출력문
 printf("%d\n", get_random()); //출력문
 printf("%d\n", get_random()); //출력문

 return 0;
}

int get_random ()  //처음으로 호출되는 경우 s(rand) 호출해 난수 시드 초기화
{
 static int inited=0; //정적지역변수

 if( inited == 0 )
 {
  printf("초기화\n"); //출력문
  srand((unsigned)time(NULL));
  inited = 1;
 }
 return rand();
}
