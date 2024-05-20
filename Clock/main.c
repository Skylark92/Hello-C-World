#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t t1, t2;
    int count = 0;

    t1 = clock();
    for (;;) {
        printf("기다리십시오. %d\n", count++);
        t2 = clock();
        if (t2 - t1 > 3 * CLOCKS_PER_SEC) {
            break;
        }
    }

    printf("끝났습니다.\n");
    return 0;
}
