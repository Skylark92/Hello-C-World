#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[128];
    int i = 123;
    double d = 3.1415;

    sprintf(str, "%d", i);
    printf("������ ���ڿ��� : %s\n", str);
    sprintf(str, "%.2f", d);
    printf("�Ǽ��� ���ڿ��� : %s\n", str);
    sprintf(str, "%e", d);
    printf("�Ǽ��� �ε� �Ҽ��� ������ ���ڿ��� %s\n", str);

    return 0;
}
