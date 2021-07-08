// 사용자로부터 하나의 수를 입력받아 rand()함수를 사용하여
// 1부터 100까지의 숫자중에서 입력 받은 수 만큼을 생성하고
// 그 중 가장 큰수와 가장 작은 수를 출력하는 프로그램을 작성하시오.
// (srand()함수를 사용하여, 매번 실행할 때 다른 임의의 수가 발생할 수 있도록 작성해야 함)
// [ 출력결과 ]
// 5를 입력할 경우
/*
  하나의 수를 입력하세요 : 5
  랜덤으로 생성된 수 : 62
  랜덤으로 생성된 수 : 0
  랜덤으로 생성된 수 : 77
  랜덤으로 생성된 수 : 3
  랜덤으로 생성된 수 : 42
  가장 큰 수 : 77
  가장 작은 수 : 0
*/

#include <stdio.h>
#include <stdlib.h> // rand(). srand()를 위한 헤더파일
#include <time.h> // time()을 위한 헤더파일
#define MAX_SIZE 100

int main() {
  /*
    num, size : 임의의 변수 선언
    random, max, min : 변수 선언 후 변수값 초기화
  */
  int num, size;
  int random = 0;
  int max = 0;
  int min = 100;

  // 사용자로부터 하나의 수를 입력받는다.
  printf("하나의 수를 입력하세요 : ");
  scanf("%d", &size);

  /*
    현재 시간은 프로그램 수행시 매번 달라지므로
    난수 발생기의 시드(seed)를 현재 시간으로 설정
  */
  srand((long)time(NULL));

  // num값이 사용자가 입력한 수보다 작을 때까지 1씩 증가
  for (num = 0; num < size; num++) {
    random = (rand() % MAX_SIZE) + 1; // 1부터 100까지의 난수를 생성
    printf("랜덤으로 생성된 수 : %d\n", random);

    if (random > max) { // random과 max 비교
      max = random; // 최종적으로 가장 큰 값이 max에 저장
    }

    if (random < min) { // random과 min 비교
      min = random; // 최종적으로 가장 작은 값이 min에 저장
    }
  }  

  // random값 중 가장 큰 수와 작은 수를 각각 출력
  printf("가장 큰 수 : %d\n", max);
  printf("가장 작은 수 : %d\n", min);

    return 0;
}