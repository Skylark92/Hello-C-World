#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ar[3];
    int num[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("%d반의 학생수를 입력하세요 : ", i + 1);
        scanf("%d", &num[i]);
        ar[i] = (int *)malloc(num[i] * sizeof(int));
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < num[i]; j++) {
            printf("%d반 %d번 학생의 성적을 입력하세요 : ", i  + 1, j + 1);
            scanf("%d", (ar[i] + j));
        }
    }

    for (i = 0; i < 3; i++) {
            printf("%d반\n", i + 1);
        for (j = 0; j < num[i]; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    // 성적 처리

    for (i = 0; i < 3; i++) {
        free(ar[i]);
    }

    return 0;
}
