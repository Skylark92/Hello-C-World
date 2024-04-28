#include <stdio.h>
#include <stdlib.h>

char Dec2HexChar(int d)
{
    if (d >= 16) {
        return '?';
    }
    return d+'0'+(d>9)*7;
}

int main()
{
    int input;

    for (;;) {
        printf("0~255 ������ ���� �Է��ϼ���. (���� �� -1) : ");
        scanf("%d", &input);
        if (input == -1) {
            break;
        }

        printf("�Է��� ���� 16�� ǥ�� = %c%c\n", Dec2HexChar(input >> 4), Dec2HexChar(input & 0xf));
    }

    return 0;
}
