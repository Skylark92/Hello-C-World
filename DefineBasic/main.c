#include <stdio.h>
#include <stdlib.h>
#define MACH 1200.0

int main()
{
    int speed;

    printf("속도를 입력하세요 (Km/h) : ");
    scanf("%d", &speed);
    printf("이 속도는 마하 %f입니다.\n", speed/MACH);
    return 0;
}
