#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, Num1, Num2;

    printf("ù ��° ���ڸ� �Է��ϼ��� : ");
    scanf("%d", &Num1);
    printf("�� ��° ���ڸ� �Է��ϼ��� : ");
    scanf("%d", &Num2);

    for (i = 1;;i++) {
        if (i % Num1 == 0 && i % Num2 == 0)
            break;
    }

    printf("�ּ� ����� = %d\n", i);

    return 0;
}
