#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("���� �Է��� �ּ��� : ");
    scanf("%d", &i);

    switch (i) {
    case 0:
        printf("�Է��� ���� 0�Դϴ�.\n");
        break;
    case 1:
        printf("1�� �Է��߽��ϴ�.\n");
        break;
    default:
        printf("0, 1�� �ƴ� �ٸ� ���Դϴ�.\n");
        break;
    }
    return 0;
}
