#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    double r;

    printf("�� ���� ������ �Է��Ͻʽÿ�(a b) : ");
    scanf("%d %d", &i, &j);

    r = (double)i/j;
    printf("%d�� %d�� ������ %f�Դϴ�.\n", i, j, r);
    return 0;
}
