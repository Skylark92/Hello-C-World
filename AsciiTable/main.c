#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

// �ƽ�Ű �ڵ�ǥ�� ������ó�� ���� ���� ����϶�.
// �μ� ������ 32~126������ ���� 95��, �� ���� 19���� 5���� ���
// �� ���ڿ� ���� 10��, 16�� �ڵ�� ���ڸ� ����ϰ�
// ���α׷� �������� getch ȣ���� �־� �ڵ带 Ȯ���� ������ ���

int main()
{
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 19; j++) {
            int c = (i * 19) + j + 32;
            printf("[%c, %d, %x]", c, c, c);
            printf("   ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
