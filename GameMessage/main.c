#include <stdio.h>
#include <stdlib.h>

void Congratulation(int count)
{
    static char *Message[] = {
        "",
        "축하합니다. 최고 성적입니다.",
        "대단한 성적입니다.",
        "참 잘 하셨습니다.",
        "보통이 아니군요.",
        "보통입니다.",
        "조금 더 노력하셔야겠습니다.",
        "정말 못하시는군요.",
        "수준 이하입니다.",
        "다음부터 절대로 이 게임을 하지 마세요.",
    };

    if (count >= 9) count = 9;
    puts(Message[count]);
}

int main()
{
    Congratulation(3);
    return 0;
}
