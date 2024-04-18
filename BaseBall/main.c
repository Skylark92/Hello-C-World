#include <stdio.h>
#include <stdlib.h>
#include<Turboc.h>

// 숫자 3개 맞추는 야구 게임

int main()
{
    int answer = (rand() % 900) + 100;

        int i = 0;
    while (1) {
        int number;

        scanf("%d", &number);

        if (number / 100 == 0) {
            printf("(작은 수 입력) 세 자리 수를 입력하세요.\n");
            continue;
        }
        if (number / 1000 > 0) {
            printf("(큰 수 입력) 세 자리 수를 입력하세요.\n");
            continue;
        }

    }

    return 0;
}
