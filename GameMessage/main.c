#include <stdio.h>
#include <stdlib.h>

void Congratulation(int count)
{
    static char *Message[] = {
        "잘 하셨습니다.",
        "보통입니다.",
        "못 하는군요.",
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
