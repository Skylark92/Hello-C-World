#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int i, j = 0;
    char brick = '@';

    while (1) {
        // ȭ�� �ʱ�ȭ
        clrscr();

        // �� �׸���
        // ���� ���κ�
        for (i = 0; i <20; i++) {
            gotoxy(40, i);
            printf("%c", brick);
        }

        // ���� ���κ�
        gotoxy(0, 20);
        for (i = 0; i < 40; i++) {
            printf("%c", brick);
        }

        // Ŀ�� ����
        gotoxy(j, j);
        printf("#");

        j++;
        delay(300);

        if (j == 19) break;
    }

    return 0;
}
