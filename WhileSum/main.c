#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n = 0;
    int sum = 0;

    double average;

    while (1) { // for (;;)
        printf("������ �Է��ϼ���. �������� 999\n");
        scanf("%d", &i);

        if (i == 999) break;

        sum = sum + i;
        n = n + 1;
    }

    if (n == 0) {
        average = 0;
    } else {
        average = (double)sum/n;
    }

    printf("�Է��� ���� �� ���� %d�Դϴ�.\n", sum);
    printf("�Է��� ���� �� ����� %.2f�Դϴ�.\n", average);

    return 0;
}
