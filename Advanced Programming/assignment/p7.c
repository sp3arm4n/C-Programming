// 선택(selection) 정렬
// strcmp(a, b) : a와 b를 비교
// strcpy(a, b) : b를 a에 복사

#include <stdio.h>
#include <string.h> // string 함수 사용 가능하게 하기 위해서 
#define Max_index 7
#define Length 10

// selection sort
void selection_sort(char (*city)[Length], int len){
    int i, j, resert;
    char tmp[Length];
    for(i = 0; i < len - 1; i++){
        for(j = i + 1; j < len; j++){
            resert = strcmp(city[i], city[j]); // city[i]와 city[j] 값 서로 비교
            if(resert > 0){ // 참이면
                strcpy(tmp, city[i]); // tmp에다 i넣기
                strcpy(city[i], city[j]); // i에다 j 넣기
                strcpy(city[j], tmp); // j에다  tmp(i) 넣기 
            }
        }
    }
}

int main(){
    char city[Max_index][Length] = {"seoul", "daejeon", "daegu", "kwangju", "inchon", "jeju", "busan"};

    int len= sizeof(city)/sizeof(city[0]);

    printf("\n=== 정렬하기 전 ===\n");
    for(int i = 0; i < len; i++){
        printf("%s   ", city[i]);
    }

    selection_sort(city, len); // 선택정렬 함수 호출

    printf("\n\n=== 정렬한 다음 ===\n");
    for(int i = 0; i < len; i++){
        printf("%s   ", city[i]);
    }
    
    printf("\n\n");

    return 0;
}