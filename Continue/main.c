#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("1���� 50���� 3�� ����� ����ϵ�, 9�� ����� �����Ѵ�.\n");

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
