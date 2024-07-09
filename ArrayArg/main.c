#include <stdio.h>
#include <stdlib.h>

int  GetTotalForWeek(int (*pa)[7])
{
    int i, sum = 0;

    for (i = 0; i < 7; i++) {
        sum += pa[0][i];
    }

    return sum;
}

int main()
{
    int ari[][7] = {
        { 1, 2, 3, 4, 5, 6, 7 },
        { 8, 9, 10, 11, 12, 13, 14 },
        { 15, 16, 17, 18, 19, 20, 21 }
    };

    int i;
    for (i = 0; i < 3; i++) {
        printf("%d주의 판매량 = %d\n", i + 1, GetTotalForWeek(&ari[i]));
    }

    return 0;
}
