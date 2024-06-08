#include <stdio.h>
#include <stdlib.h>

void PrintTomorrow(int y, int m, int d)
{
    static int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (d > days[m] || m < 1 || m > 12 || y < 1000 || y > 9999) {
        printf("입력한 날짜가 틀렸습니다.\n");
    }
    else {
        // 윤년일 경우
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
            days[2] = 29;
            printf("윤년입니다.\n");
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

        printf("내일은 %d년 %d월 %d일입니다.\n", y, m, d);
    }
}

int main()
{
    int year, mon, day;

    printf("오늘 날짜(년 월 일)을 공백으로 구분하여 입력해주세요 : ");
    scanf("%d%d%d", &year, &mon, &day);

    PrintTomorrow(year, mon, day);
    return 0;
}
