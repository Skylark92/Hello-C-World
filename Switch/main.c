#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("값을 입력해 주세요 : ");
    scanf("%d", &i);

    switch (i) {
    case 0:
        printf("입력한 값은 0입니다.\n");
        break;
    case 1:
        printf("1을 입력했습니다.\n");
        break;
    default:
        printf("0, 1이 아닌 다른 수입니다.\n");
        break;
    }
    return 0;
}
