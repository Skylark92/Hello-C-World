#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t t1, t2;
    int count = 0;

    t1 = clock();
    for (;;) {
        printf("��ٸ��ʽÿ�. %d\n", count++);
        t2 = clock();
        if (t2 - t1 > 3 * CLOCKS_PER_SEC) {
            break;
        }
    }

    printf("�������ϴ�.\n");
    return 0;
}
