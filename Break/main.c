#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("�ܺ� ����\n");
        for (j = 0; j < 2; j++) {
            break; // ���� �ݺ����� Ż��
            printf("���� ����\n");
        }
    }

    int flag = 0; // Ż�� ����
    for (i = 0; i < 100; i++) {
            printf("Ż�� �ܺ� ����\n");
        for (j = 0; j < 50; j++) {
            flag = 1;
            break;
            printf("Ż�� ���� ����\n");
        }
        if (flag == 1) break;
    }

    int k, l, m, n;
    for (i = 0; i < 100; i++) {
        printf("1��ø\n");
        for (j = 0; j < 100; j++) {
            printf("2��ø\n");
            goto outside;
            for (k = 0; k < 100; k++) {
                printf("3��ø\n");
                for (l = 0; l <100; l++) {
                    printf("4��ø\n");
                    for (m = 0; m < 100; m++) {
                        printf("5��ø\n");
                        for (n = 0; n < 100; n++) {
                            printf("6��ø\n");
                        }
                    }
                }
            }
        }
    }
    outside:


    return 0;
}
