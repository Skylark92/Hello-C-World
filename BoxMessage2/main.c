#include <Turboc.h>

void BoxMessage(char *str);
void putchs(int ch, int n);

int main()
{
    BoxMessage("함수가 함수를 또 부를 수 있다.");
    BoxMessage("함수는 반복을 제거하며 코드의 재사용성을 높인다.");
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
