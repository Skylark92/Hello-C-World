#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1���� ��� �����Ǵ� ������ ���� ������Ű�ٰ� ���ʷ� 1000�� �Ѵ� ���� ���� ����϶�.

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

    printf("1������ ���� ���ʷ� 1000�� �Ѵ� ���� :%d", i);

    return 0;
}
