#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1234;
    int *pi;
    double d = 3.14;
    double *pd;

    pi = &i;
    pd = &d;
    printf("정수 = %d\n", *pi);
    printf("실수 = %f\n", *pd);

    pi = (int *)&d;
    printf("pi로 읽은 d번지의 값 = %d\n", *pi);

    return 0;
}
