#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Ȧ, ¦ �Ǻ��մϴ�.\n");
    scanf("%d", &i);

    printf("%d��(��) %s �Դϴ�.\n\n", i, i % 2 ? "Ȧ" : "¦");

    int j;

    j = (i = 3, i +2);
    // ��ȣ�� ������ ��ǥ�� ������ �켱 ������ ���� ���� ���ϴ� ����� ���� �� ����
    printf("i = %d, j = %d\n\n", i, j);

    printf("�ݺ������� �� ���� ���� ������ ����ϱ�\n");

    for (i = 1, j = 1; i <5; i++, j +=2) {
        printf("i = %d", i);
        printf(", j = %d\n", j);
    }

    return 0;
}
