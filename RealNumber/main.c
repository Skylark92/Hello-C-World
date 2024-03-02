#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint-gcc.h>

int main()
{
    float a = 1.23456789; // 4 byte
    double b = -1.234567890123456789; // 8 byte
    long double c = 0.123456786789; // 10~16 byte, 서식문자열 도대체 어떻게 써야 하는 걸까?

    printf("%f, %lf, %e\n", a, b, c);
    return 0;
}
