#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[] = { 1, 2, 3, 4, 5 };
    int *pi;

    pi = ar;
    printf("ù ��° ��� = %d\n", *pi);
    pi++;
    printf("�� ��° ��� = %d\n", *pi);
    return 0;
}
