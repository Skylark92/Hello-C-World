#include <stdio.h>
#include <stdlib.h>

int main()
{
    scanTogether();
    return 0;
}

void sum()
{
    int a, b;
    int sum;

    printf("ù ��° ���ڸ� �Է��ϼ��� : ");
    scanf("%d", &a);
    printf("�� ��° ���ڸ� �Է��ϼ��� : ");
    scanf("%d", &b);
    sum = a + b;
    printf("�Է��� �� ���� ���� %d�Դϴ�.\n", sum);
}

void scanTogether()
{
    int a, b;
    int sum;

    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("�Է��� �� ���� ���� %d�Դϴ�.\n", sum);
}
