#include <stdio.h>
#include <stdlib.h>

int main()
{
    short a, b, c;
    unsigned short s, t, u;

    a = 20000;
    b = 30000;
    c = a + b;
    printf("%d + %d = %d\n", a, b, c); // -15536

    s = 20000;
    t = 30000;
    u = s - t;
    printf("%d - %d = %d\n", s, t, u); // 55536
    return 0;
}
