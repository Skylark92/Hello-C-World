#include <stdio.h>
#include <stdlib.h>
#define MACH 1200.0

int main()
{
    int speed;

    printf("�ӵ��� �Է��ϼ��� (Km/h) : ");
    scanf("%d", &speed);
    printf("�� �ӵ��� ���� %f�Դϴ�.\n", speed/MACH);
    return 0;
}