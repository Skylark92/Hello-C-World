#include <stdio.h>
#include <stdlib.h>

void Congratulation(int count)
{
    switch (count) {
    case 1:
        puts("축하합니다. 최고 성적입니다.");
        break;
    case 2:
        puts("대단한 성적입니다.");
        break;
    case 3:
        puts("참 잘 하셨습니다.");
        break;
    case 4:
        puts("보통이 아니군요.");
        break;
    case 5:
        puts("보통입니다.");
        break;
    case 6:
        puts("조금 더 노력하셔야겠습니다.");
        break;
    case 7:
        puts("정말 못하시는군요.");
        break;
    case 8:
        puts("수준 이하입니다.");
        break;
    default:
        puts("다음부터 절대로 이 게임을 하지 마세요.");
        break;
    }
}

int main()
{
    Congratulation(3);
    return 0;
}
