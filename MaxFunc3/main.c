#include <stdio.h>
#include <stdlib.h>
#include "./util.h"

int main()
{
    int a, b, m;

    printf("�� ���� �Է��ϼ��� :\n");
    scanf("%d%d", &a, &b);
    m = Max(a, b);
    printf("�� �� �� ū ���� %d�Դϴ�.\n", m);
    return 0;
}
