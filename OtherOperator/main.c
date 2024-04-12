#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("홀, 짝 판별합니다.\n");
    scanf("%d", &i);

    printf("%d는(은) %s 입니다.\n\n", i, i % 2 ? "홀" : "짝");

    int j;

    j = (i = 3, i +2);
    // 괄호가 없으면 쉼표의 연산자 우선 순위가 가장 낮아 원하는 결과를 얻을 수 없음
    printf("i = %d, j = %d\n\n", i, j);

    printf("반복문에서 두 개의 제어 변수를 사용하기\n");

    for (i = 1, j = 1; i <5; i++, j +=2) {
        printf("i = %d", i);
        printf(", j = %d\n", j);
    }

    return 0;
}
