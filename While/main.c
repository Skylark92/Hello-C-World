#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0;

    i = 1;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("���� = %d\n", sum);

    sum = 0;

    i = 1;
    do {
        sum += i;
        i++;
    } while(i <= 100);

    printf("���� = %d\n", sum);
    return 0;
}
