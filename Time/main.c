#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;

    time(&t);
    printf("���� �ð��� %s�Դϴ�.\n", ctime(&t));

    return 0;
}
