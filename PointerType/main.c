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
    printf("���� = %d\n", *pi);
    printf("�Ǽ� = %f\n", *pd);

    pi = (int *)&d;
    printf("pi�� ���� d������ �� = %d\n", *pi);

    return 0;
}
