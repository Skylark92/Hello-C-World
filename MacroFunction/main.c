#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>
#define dubaeOne(i) i+i
#define dubaeTwo(i) (i+i)
#define jegop1(i) (i*i)
#define jegop2(i) ((i)*(i))
#define VALUE1 1000
#define VALUE2 VALUE1+100
#define printmsg(x, y, str) { gotoxy(x, y); \
puts(str); }

int main()
{
    printf("dubae1 : %d\n", -dubaeOne(3)); // -3 + 3
    printf("dubae2 : %d\n", -dubaeTwo(3)); // -(3 + 3)
    printf("jegop1 : %d\n", jegop1(3+1)); // 3 + 1 * 3 + 1
    printf("jegop2 : %d\n", jegop2(3+1)); // (3 + 1) * (3 + 1)
    printf("VALUE1 : %d\n", VALUE1);
    printf("VALUE2 : %d\n", VALUE2);
    printf("VALUE2 X 2 : %d\n", VALUE2 * 2); // 1000 + 100 * 2

    printmsg(20, 20, "hello");
    return 0;
}
