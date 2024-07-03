#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ar[] = "한국을 빛낸 사람들";
    char ars[2][3][10] = {
        {
            "이석우", "Shine", "이순신"
        },
        {
            "유관순", "신사임당", "강감찬"
        }
    };

    printf("ar 배열 = %s\n", ar);
    printf("ars[1][1] = %s\n", ars[1][1]);

    return 0;
}
