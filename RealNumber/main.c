#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint-gcc.h>

int main()
{
    float a = 1.23456789; // 4 byte
    double b = -1.234567890123456789; // 8 byte
    long double c = 0.123456786789; // 10~16 byte, ���Ĺ��ڿ� ����ü ��� ��� �ϴ� �ɱ�?

    printf("%f, %lf, %e\n", a, b, c);
    return 0;
}
