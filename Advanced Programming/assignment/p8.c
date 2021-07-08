// 사용자로부터 입력받은 모든 텍스트를 대문자로 출력
// (어떤 라이브러리 함수를 사용해도 좋음)
/*
  텍스트를 입력하시오 : C language is easy
  대문자 출력 : C LANGUAGE IS EASY
*/

#include <stdio.h>
#include <string.h>

int main() {
  char str[] = {};
  printf("\n텍스트를 입력하시오 : ");
  gets(str); // 문자 입력 함수
  printf("대문자 출력 : ");
  while(1) {
    if(strlen(str) == 0) // 문자열 길이 확인
      break; // NULL문자를 만나면 break문을 통해 while문 탈출
    strupr(str); // 대문자로 치환
    puts(str); // 문자 출력 함수
    break;
  }
  printf("\n");

  return 0;
}
