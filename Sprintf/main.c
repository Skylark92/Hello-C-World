#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[128];
    int i = 123;
    double d = 3.1415;

    sprintf(str, "%d", i);
    printf("정수를 문자열로 : %s\n", str);
    sprintf(str, "%.2f", d);
    printf("실수를 문자열로 : %s\n", str);
    sprintf(str, "%e", d);
    printf("실수를 부동 소수점 형식의 문자열로 %s\n", str);

    return 0;
}
