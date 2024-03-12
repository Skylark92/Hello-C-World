#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum;

    for (i = 0; i < 10; i = i + 1) {
        printf("숫자 = %d\n", i);
    }

    sum = 0;
    for (i = 0; i <= 100; i = i + 1) {
        sum = sum + i;
    }

    printf("1~100까지의 합 = %d\n", sum);

    int a;

    printf("정수 입력 :");
    scanf("%d", &a);

    sum = 0;
    for (i = 0; i <= a; i++) {
        sum += i;
    }

    printf("1부터 입력한 값 a까지 : %d", sum);
    return 0;
}
