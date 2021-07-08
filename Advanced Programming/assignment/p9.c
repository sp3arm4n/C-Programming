// 로또 숫자 자동 추천 프로그램
// 1부터 45까지 숫자 중 6개의 숫자를 자동 뽑기
// [실행 결과]
/*
  ** 로또 추첨을 시작합니다. **
  추첨된 로또 번호 ==>  20  15  43  38  14  11
*/
// 매번 실행할 때마다 추첨된 로또 번호는 다르게 출력되어야 함

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 6

int main() {
  int lotto[NUM];
  int i;
  srand((unsigned)time(NULL));
  printf("\n** 로또 추첨을 시작합니다. **\n추첨된 로또 번호 ==> ");

  for(i = 0; i < NUM; i++) {
    lotto[i] = (rand() % 45) + 1; // 1부터 45까지 난수 생성
    printf("%3d ", lotto[i]); // 생성된 난수 배열의 크기만큼 메모리에 할당받기
  }

  printf("\n\n");

  return 0;
}