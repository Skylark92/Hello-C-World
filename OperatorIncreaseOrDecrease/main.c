#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    i = 3;
    printf("���������� ���� �� : %d\n", ++i);

    i = 3;
    printf("���������� ���� �� : %d\n", ++i);

    i = 0;
    while (++i < 5) {
        printf("%d\n", i);
    }

    //  for (i = 1; i <= 10; i++) {}
    //  for (i = 1; i <= 10; ++i) {}
    // ���� �����ϴ�.

    return 0;
}
