#include <stdio.h>
#include <stdlib.h>
#include<Turboc.h>

// ���� 3�� ���ߴ� �߱� ����

int main()
{
    int answer = (rand() % 900) + 100;

        int i = 0;
    while (1) {
        int number;

        scanf("%d", &number);

        if (number / 100 == 0) {
            printf("(���� �� �Է�) �� �ڸ� ���� �Է��ϼ���.\n");
            continue;
        }
        if (number / 1000 > 0) {
            printf("(ū �� �Է�) �� �ڸ� ���� �Է��ϼ���.\n");
            continue;
        }

    }

    return 0;
}
