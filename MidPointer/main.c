#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[] = { 1, 2, 3, 4, 5 };
    int *p1, *p2, *p3;

    p1 = &ar[0];
    p2 = &ar[4];
    p3 = p1 + (p2 - p1 ) / 2;

    printf("�߰��� ��� = %d\n", *p3);
    return 0;
}
