#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ar[] = "�ѱ��� ���� �����";
    char ars[2][3][10] = {
        {
            "�̼���", "Shine", "�̼���"
        },
        {
            "������", "�Ż��Ӵ�", "������"
        }
    };

    printf("ar �迭 = %s\n", ar);
    printf("ars[1][1] = %s\n", ars[1][1]);

    return 0;
}
