#include <stdio.h>
#include <stdlib.h>

void PrintTomorrow(int m, int d)
{
    static int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (d > days[m] || m < 1 || m > 12) {
        printf("�Է��� ��¥�� Ʋ�Ƚ��ϴ�.\n");
    }
    else {
        d++;
        if (d > days[m]) {
            d = 1;
            m++;
            if (m == 13) {
                m = 1;
            }
        }

        printf("������ %d�� %d���Դϴ�.\n", m, d);
    }
}

int main()
{
    int mon, day;

    printf("���� ��¥(�� ��)�� �������� �����Ͽ� �Է����ּ��� : ");
    scanf("%d%d", &mon, &day);

    PrintTomorrow(mon, day);
    return 0;
}
