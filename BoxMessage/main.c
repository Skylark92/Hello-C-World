#include <Turboc.h>

void BoxMessage(char *str);

int main()
{
    BoxMessage("박스를 그리고 그 안에 문자열을 출력한다.");
    BoxMessage("전달된 문자열의 길이에 적당한 박스를 스스로 계산한다.");
    BoxMessage("신기하군");
    return 0;
}

void BoxMessage(char *str)
{
    int i;
    int len;

    len = strlen(str);
    puts("");
    for (i = 0; i <len +4; i++) {
        putch('-');
    }
    puts("");
    printf("| %s | \n", str);
    for (i = 0; i < len + 4; i++) {
        putch('-');
    }
    puts("");
}
