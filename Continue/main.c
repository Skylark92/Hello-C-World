#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("1부터 50까지 3의 배수를 출력하되, 9의 배수는 제외한다.\n");

    for (i = 1; i <= 50; i++) {
        if (i % 9 == 0) {
            continue;
        }
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
