#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ar[3];
    int num[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("%d���� �л����� �Է��ϼ��� : ", i + 1);
        scanf("%d", &num[i]);
        ar[i] = (int *)malloc(num[i] * sizeof(int));
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < num[i]; j++) {
            printf("%d�� %d�� �л��� ������ �Է��ϼ��� : ", i  + 1, j + 1);
            scanf("%d", (ar[i] + j));
        }
    }

    for (i = 0; i < 3; i++) {
            printf("%d��\n", i + 1);
        for (j = 0; j < num[i]; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    // ���� ó��

    for (i = 0; i < 3; i++) {
        free(ar[i]);
    }

    return 0;
}
