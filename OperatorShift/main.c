#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, result;

    printf("������ �Է��ϼ��� : \n");
    scanf("%d", &i);

    printf("����� �Է��ϼ��� : (3, 9, 15, 60)\n");
    scanf("%d", &j);

    switch (j) {
    case 3:
        result = (i << 1) + i;
        break;
    case 9:
        result = (i << 3) + i;
        break;
    case 15:
        result = (i << 4) - i;
        break;
    case 60:
        result = (i << 6) - (i << 2);
        break;
    default:
        printf("�߸��� �Է��Դϴ�.\n");
        break;
    }

    printf("��� = %d\n", result);

    return 0;
}
