#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arScore[2][3];
    int cla, stu;
    int sum[2];
    int maxScore = 0;
    int maxc, maxs;

    arScore[0][0] = 92;
    arScore[0][1] = 84;
    arScore[0][2] = 76;
    arScore[1][0] = 88;
    arScore[1][1] = 72;
    arScore[1][2] = 98;

    for (cla = 0; cla < 2; cla++) {
        sum[cla] = 0;
        for (stu = 0; stu < 3; stu++) {
            sum[cla] += arScore[cla][stu];
            if (maxScore < arScore[cla][stu]) {
                maxScore = arScore[cla][stu];
                maxc = cla;
                maxs = stu;
            }
        }
        printf("%d반 :총점 = %d점, %d점\n", cla + 1, sum[cla], sum[cla] / 3);
    }

    printf("최고 득점은 %d반 %d번 학생의 %d점입니다.\n", maxc, maxs, maxScore);

    return 0;
}
