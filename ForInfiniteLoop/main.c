#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int num;
    int input;

   for(;;) {
        num = random(100) + 1;
        printf("\n제가 만든 숫자를 맞춰 보세요.\n");
        do {
            printf("숫자를 입력하세요 (끝낼 때는 999) : ");
            scanf("%d", &input);

            if (input == 999) {
                exit(0);
            }

            if (input == num) {
                printf("맞췄습니다.\n");
            } else if (input > num) {
                printf("입력한 숫자보다 더 작습니다.\n");
            } else {
                printf("입력한 숫자보다 더 큽니다.\n");
            }
        } while (input != num);

    }
    return 0;
}
