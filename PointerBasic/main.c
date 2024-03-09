#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num = 629;
    int *pi;
    pi = &Num;

    printf("Num의 값은 %d입니다.\n", *pi);

    double Num1, Num2;
    double *pd;

    Num1 = 3.14;
    pd = &Num1;

    printf("%f: 초기화 되기 전의 Num2\n", Num2);
    Num2 = *pd;

    printf("Num2의 값은 %.2f입니다.\n", Num2);

    return 0;
}
