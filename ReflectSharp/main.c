#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int i;
    char brick = '@';

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

    return 0;
}
