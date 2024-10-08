#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>
#include <ctype.h>

// 문제 하나에 대한 정보를 가지는 구조체
typedef struct {
    char *Question;
    char *Case[3];
    int Answer;
    BOOL Used;
} tag_Munje;

// 문제 배열
tag_Munje Munje[] = {
    { "다음 타입 중 기본형이 아닌 것은", "정수형", "배열", "문자형", 2, FALSE },
    { "다음 중 반복문이 아닌 것은", "switch", "for", "while", 1, FALSE },
    { "구조체를 선언할 때 사용하는 키워드는", "int", "goto", "struct", 3, FALSE },
    { "다음 중 가장 크기가 큰 타입은", "int", "double", "char", 2, FALSE },
    { "열거형을 선언할 때 사용하는 키워드는", "enum", "alias", "define", 1, FALSE },
    { "다음 중 단항 연산자는", "++", "?", "=", 1, FALSE },
    { "문자 배열의 내용을 바꿀 때 사용하는 함수는", "strassign", "strmove", "strcpy", 3, FALSE },
    { "구조체의 멤버를 읽을 때 사용하는 연산자는", "->", "*", ".", 3, FALSE },
    { "정수형 타입이 아닌 것은", "unsigned", "short", "float", 3, FALSE },
    { "C 프로그램에서 반드시 필요한 함수는", "entry", "main", "winMain", 2, FALSE }
};

int main()
{
    int num;
    int count;
    int i;
    char ch;

    randomize();
    for (count = 0; count <5; count++) {
        // 출제되지 않은 문제 하나를 고른다.
        do {
            num = random(sizeof(Munje) / sizeof(Munje[0]));
        } while (Munje[num].Used == TRUE);
        Munje[num].Used = TRUE;

        // 문제를 출력한다.
        clrscr();
        gotoxy(2, 2);
        printf("%s?", Munje[num].Question);

        for (i = 0; i < 3; i++) {
            gotoxy(2, 5 + i * 2);
            printf("(%d) %s", i + 1, Munje[num].Case[i]);
        }

        gotoxy(2, 12);
        printf("1, 2, 3 중 하나를 선택하세요. 끝낼 때는 Q : ");

        // 정답을 입력받아 판정한다.
        ch = getch();
        if (tolower(ch) == 'q') {
            break;
        }

        ch = ch - '0';
        gotoxy(2, 15);
        if (ch == Munje[num].Answer) {
            printf("정답입니다.");
        } else {
            printf("틀렸습니다. 정답은 %d번입니다.", Munje[num].Answer);
        }
        delay(1000);
    }

    gotoxy(2, 17);
    printf("수고하셨습니다.\n");

    return 0;
}
