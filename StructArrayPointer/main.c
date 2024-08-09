#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct tag_Friend {
        char Name[10];
        int Age;
        double Height;
    };

    // 구조체 배열 사용 예
    struct tag_Friend arJuso[10];
    arJuso[5].Age = 30;

    // 구조체에 속한 배열 사용 예
    struct tag_Friend Friend;
    Friend.Name[0] = 'K';

    // 배열에 속한 구조체에 속한 배열 사용 예
    arJuso[1].Name[2] = 'J';

    // 구조체 포인터 배열 사용 예
    struct tag_Friend *pJuso[10];
    int i;
    for (i = 0; i < 10; i++) {
        pJuso[i] = (struct tag_Friend *)malloc(sizeof(struct tag_Friend));
    }

    pJuso[3]->Age = 40;

    for (i = 0; i < 10; i++) {
        free(pJuso[i]);
    }
}
