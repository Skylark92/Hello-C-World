#include <stdio.h>
#include <stdlib.h>

void Congratulation(int count)
{
    static char *Message[] = {
        "�� �ϼ̽��ϴ�.",
        "�����Դϴ�.",
        "�� �ϴ±���.",
    };

    static int arMes[] = { 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2 };

    if (count >= 12) count = 12;
    puts(Message[arMes[count]]);
}

int main()
{
    Congratulation(8);
    return 0;
}
