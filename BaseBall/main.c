#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>
#include <Math.h>
#include <time.h>

// 숫자 3개 맞추는 야구 게임

int main()
{
    // 임의의 세 자리 수 설정
    srand(time(NULL));
    int answer = (rand() % 900) + 100;
    printf("정답: %d\n", answer);

    // 시작
    while (1) {
        // 입력
        int number;
        scanf("%d", &number);

        // 잘못된 입력 확인
        if (number < 100 || number > 999) {
            printf("세 자리 수를 입력하세요.\n");
            continue;
        }

        // 정답이면 종료
        if (number == answer) {
            printf("정답입니다!\n");
            break;
        }

        // 스트라이크, 볼 확인
        int strike = 0, ball = 0;

        int i, j;
        for (i = 0; i < 3; i++) {
            int num = number / (int)pow(10, i) % 10;
            int target = answer / (int)pow(10, i) % 10;

            if (num == target) {
                strike += 1;
            } else {
                for (j = 0; j < 3; j++) {
                    num = number / (int)pow(10, j) % 10;
                    if (num == target) {
                        ball += 1;
                        break;
                    }
                }
            }
        }

        printf("%d Strike, %d Ball\n", strike, ball);
    }

    return 0;
}
