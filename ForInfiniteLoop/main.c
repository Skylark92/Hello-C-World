#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    int num;
    int input;

   for(;;) {
        num = random(100) + 1;
        printf("\n���� ���� ���ڸ� ���� ������.\n");
        do {
            printf("���ڸ� �Է��ϼ��� (���� ���� 999) : ");
            scanf("%d", &input);

            if (input == 999) {
                exit(0);
            }

            if (input == num) {
                printf("������ϴ�.\n");
            } else if (input > num) {
                printf("�Է��� ���ں��� �� �۽��ϴ�.\n");
            } else {
                printf("�Է��� ���ں��� �� Ů�ϴ�.\n");
            }
        } while (input != num);

    }
    return 0;
}
