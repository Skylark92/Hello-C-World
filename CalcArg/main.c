#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main(int argc, char *argv[])
{
    int a, b, c;
    char op;

    printf("%s\n", argv[2]); // '*' ���� ��ȣ�� ������ ���ڷ� �Էµ��� �ʴ´�.

    if (argc != 4) {
        printf("������ ��Ȯ�ϰ� �Է��� �ֽʽÿ�.");
        exit(0);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    op = argv[2][0];

    switch (op) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a *b;
            break;
        case '/':
            c = a / b;
            break;
        default:
            printf("��Ģ ���길 �� �� �ֽ��ϴ�.\n");
            exit(0);
    }

    printf("��� ��� = %d", c);

    return 0;
}
