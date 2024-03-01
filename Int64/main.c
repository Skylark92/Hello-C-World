#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 a, b, c; // 2 ^ 64 까지 표현 가

    a = 11111111;
    b = 11111111;
    c = a * b;
    printf("%I64d\n", c);
}

// 0으로 시작하면 8진수
// 0x로 시작하면 16진수
