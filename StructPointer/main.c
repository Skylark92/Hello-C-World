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

    strcpy(pFriend -> Name, "�ƹ���");
    pFriend -> Age = 30;
    pFriend -> Height = 178.2;

    printf("�̸�=%s, ����=%d, Ű=%.1f\n", pFriend->Name, pFriend->Age, pFriend->Height);

    return 0;
}
