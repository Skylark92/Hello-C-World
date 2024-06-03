#include <stdio.h>
#include <stdlib.h>

void PrintTomorrow(int m, int d)
{
    static int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (d > days[m] || m < 1 || m > 12) {
        printf("입력한 날짜가 틀렸습니다.\n");
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

        printf("내일은 %d월 %d일입니다.\n", m, d);
    }
}

int main()
{
    int mon, day;

    printf("오늘 날짜(월 일)을 공백으로 구분하여 입력해주세요 : ");
    scanf("%d%d", &mon, &day);

    PrintTomorrow(mon, day);
    return 0;
}
