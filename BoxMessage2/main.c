#include <Turboc.h>

void BoxMessage(char *str);
void putchs(int ch, int n);

int main()
{
    BoxMessage("�Լ��� �Լ��� �� �θ� �� �ִ�.");
    BoxMessage("�Լ��� �ݺ��� �����ϸ� �ڵ��� ���뼺�� ���δ�.");
    return 0;
}

void BoxMessage(char *str)
{
        int len;

        len = strlen(str);
        puts("");
        putchs('-', len + 4);
        printf("| %s |\n", str);
        putchs('-', len + 4);
}

void putchs(int ch, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        putch(ch);
    }
    puts("");
}
