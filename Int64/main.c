#include <stdio.h>
#include <stdlib.h>

int main()
{
    __int64 a, b, c; // 2 ^ 64 ���� ǥ�� ��

    a = 11111111;
    b = 11111111;
    c = a * b;
    printf("%I64d\n", c);
}

// 0���� �����ϸ� 8����
// 0x�� �����ϸ� 16����
