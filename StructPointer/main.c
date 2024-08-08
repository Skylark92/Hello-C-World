#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Name[10];
    int Age;
    double Height;
} tag_friend;

int main()
{
    tag_friend Friend;
    tag_friend *pFriend;
    pFriend = &Friend;

    strcpy(pFriend -> Name, "아무개");
    pFriend -> Age = 30;
    pFriend -> Height = 178.2;

    printf("이름=%s, 나이=%d, 키=%.1f\n", pFriend->Name, pFriend->Age, pFriend->Height);

    return 0;
}
