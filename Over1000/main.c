#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1부터 계속 증가되는 정수의 합을 누적시키다가 최초로 1000을 넘는 수를 구해 출력하라.

    int i = 1, sum = 0, j;

    while (sum < 1000) {
        sum += i;
        for (j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%d", j);
            } else {
            printf(" + %d", j);
            }
        }
        printf(" = %d\n", sum);
        if (sum > 1000) {
            break;
        }
        i++;
    }

    printf("1부터의 합이 최초로 1000이 넘는 숫자 :%d", i);

    return 0;
}
