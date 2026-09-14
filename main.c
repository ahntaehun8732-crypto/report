```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;

    printf("모래시계의 높이(3 이상의 홀수)를 입력하세요: ");
    scanf("%d", &N);

    // 예외 처리: 3 미만이거나 짝수인 경우
    if (N < 3 || N % 2 == 0) {
        printf("3 이상의 홀수만 입력해야 합니다.\n");
        return 1;
    }

    int half = N / 2; // 상단부 줄 수 (예: N=5일 때 half=2)

    // 1. 상단부 (중앙 역삼각형 포함)
    for (int i = 0; i <= half; i++) {
        // 공백 출력
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 0; j < N - (2 * i); j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. 하단부 (아래쪽 삼각형)
    for (int i = half - 1; i >= 0; i--) {
        // 공백 출력
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 0; j < N - (2 * i); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```
