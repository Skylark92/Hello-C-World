#include <stdio.h>
#include <stdlib.h>

int main()
{
    char capital[16];

    printf("�츮������ ������ ����Դϱ�? ");
    scanf("%s",  capital);

    if (strcmp(capital, "����") == 0) {
        printf("�����մϴ�. �����Դϴ�.\n");
    } else {
        printf("Ʋ�ȴ�.");
    }
    return 0;
}
