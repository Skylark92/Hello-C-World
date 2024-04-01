#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int i;
    char brick = '@';

    // 벽 그리기
    // 우측 세로벽
    for (i = 0; i <20; i++) {
        gotoxy(40, i);
        printf("%c", brick);
    }

    // 하측 가로벽
    gotoxy(0, 20);
    for (i = 0; i < 40; i++) {
        printf("%c", brick);
    }

    return 0;
}
