#include <stdio.h>
#include <stdlib.h>

int plusone(int a);
void plusref(int *a);

int main()
{
        int i, j;

        i = 5;
        printf("i = %d, ��� = %d\n", i, plusone(i));

        j = 3;
        plusref(&j);
        printf("j = %d, ��� = %d\n", j, j);
    return 0;
}

int plusone(int a)
{
    a = a + 1;
    return a;
}

void plusref(int *a)
{
    *a = *a + 1;
}
