#include <Turboc.h>

void BoxMessage(char *str);

int main()
{
    BoxMessage("�ڽ��� �׸��� �� �ȿ� ���ڿ��� ����Ѵ�.");
    BoxMessage("���޵� ���ڿ��� ���̿� ������ �ڽ��� ������ ����Ѵ�.");
    BoxMessage("�ű��ϱ�");
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
