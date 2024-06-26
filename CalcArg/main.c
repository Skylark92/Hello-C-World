#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main(int argc, char *argv[])
{
    int a, b, c;
    char op;

    printf("%s\n", argv[2]); // '*' 곱셈 기호가 쉘에서 인자로 입력되지 않는다.

    if (argc != 4) {
        printf("계산식을 정확하게 입력해 주십시오.");
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
            printf("사칙 연산만 할 수 있습니다.\n");
            exit(0);
    }

    printf("계산 결과 = %d", c);

    return 0;
}
