#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arScore[5];
    int i;
    int sum;

    for (i = 0; i < sizeof(arScore) / sizeof(arScore[0]); i++) {
        printf("%d�� �л��� ������ �Է��ϼ��� : ", i + 1);
        scanf("%d", &arScore[i]);
    }

    sum = 0;
    for (i = 0; i < sizeof(arScore) / sizeof(arScore[0]); i++) {
        sum += arScore[i];
    }

    printf("\n������ %d���̰� ����� %d���Դϴ�.\n",
                    sum, sum / (sizeof(arScore) / sizeof(arScore[0])));

    return 0;
}
