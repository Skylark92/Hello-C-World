#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Score;

    printf("������ �Է��ϼ��� : \n");
    scanf("%d", &Score);

    switch (Score / 10) {

    case 10:
    case 9:
        printf("���Դϴ�.\n");
        break;
    case 8:
        printf("���Դϴ�.\n");
        break;
    case 7:
        printf("���Դϴ�.\n");
        break;
    case 6:
        printf("���Դϴ�.\n");
        break;
    default:
        printf("���Դϴ�.\n");
        break;
    }

    return 0;
}
