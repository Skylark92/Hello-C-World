#include <stdio.h>
#include <stdlib.h>

void PrintTomorrow(int y, int m, int d)
{
    static int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (d > days[m] || m < 1 || m > 12 || y < 1000 || y > 9999) {
        printf("�Է��� ��¥�� Ʋ�Ƚ��ϴ�.\n");
    }
    else {
        // ������ ���
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
            days[2] = 29;
            printf("�����Դϴ�.\n");
        }
        d++;
        if (d > days[m]) {
            d = 1;
            m++;
            if (m == 13) {
                y++;
                m = 1;
            }
        }

        printf("������ %d�� %d�� %d���Դϴ�.\n", y, m, d);
    }
}

int main()
{
    int year, mon, day;

    printf("���� ��¥(�� �� ��)�� �������� �����Ͽ� �Է����ּ��� : ");
    scanf("%d%d%d", &year, &mon, &day);

    PrintTomorrow(year, mon, day);
    return 0;
}
