#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num = 629;
    int *pi;
    pi = &Num;

    printf("Num�� ���� %d�Դϴ�.\n", *pi);

    double Num1, Num2;
    double *pd;

    Num1 = 3.14;
    pd = &Num1;

    printf("%f: �ʱ�ȭ �Ǳ� ���� Num2\n", Num2);
    Num2 = *pd;

    printf("Num2�� ���� %.2f�Դϴ�.\n", Num2);

    return 0;
}
