#include <stdio.h>
#include <stdlib.h>

int main()
{
    char capital[16];

    printf("우리나라의 수도는 어디입니까? ");
    scanf("%s",  capital);

    if (strcmp(capital, "서울") == 0) {
        printf("축하합니다. 정답입니다.\n");
    } else {
        printf("틀렸다.");
    }
    return 0;
}
