#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int low,hi;

    for (;;) {
        printf("0~255������ ���� �Է��Ͻÿ� (���� �� -1)  : ");
        scanf("%d",&input);

        if (input == -1) {
                break;
        }

        hi = input >> 4;

        low=input & 0xf;

        printf("�Է��� ���� 16�� ǥ�� = %c%c\n", hi+'0'+(hi>9)*7,low+'0'+(low>9)*7);
        printf("printf�� Ȱ���� ǥ�� = %X\n", input);
    }


    return 0;
}
