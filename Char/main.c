#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    signed char a = -1;
    unsigned char b = '2';
    signed char c = 'a';
    unsigned char d = 100;

    printf("%d, %c, %c, %d\n", a, b, c, c); // 타입 선언은 저장 방식을 나타낼 뿐인가?
    gotoxy(b, 5);
    putch(d);

    return 0;
}
