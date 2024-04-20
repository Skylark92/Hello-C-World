#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>
#include <Math.h>
#include <time.h>

// ���� 3�� ���ߴ� �߱� ����

int main()
{
    // ������ �� �ڸ� �� ����
    srand(time(NULL));
    int answer = (rand() % 900) + 100;
    printf("����: %d\n", answer);

    // ����
    while (1) {
        // �Է�
        int number;
        scanf("%d", &number);

        // �߸��� �Է� Ȯ��
        if (number < 100 || number > 999) {
            printf("�� �ڸ� ���� �Է��ϼ���.\n");
            continue;
        }

        // �����̸� ����
        if (number == answer) {
            printf("�����Դϴ�!\n");
            break;
        }

        // ��Ʈ����ũ, �� Ȯ��
        int strike = 0, ball = 0;

        int i, j;
        for (i = 0; i < 3; i++) {
            int num = number / (int)pow(10, i) % 10;
            int target = answer / (int)pow(10, i) % 10;

            if (num == target) {
                strike += 1;
            } else {
                for (j = 0; j < 3; j++) {
                    num = number / (int)pow(10, j) % 10;
                    if (num == target) {
                        ball += 1;
                        break;
                    }
                }
            }
        }

        printf("%d Strike, %d Ball\n", strike, ball);
    }

    return 0;
}
