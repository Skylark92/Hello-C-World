#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;

    time(&t);
    printf("현재 시간은 %s입니다.\n", ctime(&t));

    return 0;
}
