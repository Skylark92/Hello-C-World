#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tag_friend {
    char Name[10];
    int Age;
    double Height;
};

int main()
{
    struct tag_friend Friend;

    strcpy(Friend.Name, "�ƹ���");
    Friend.Age = 30;
    Friend.Height = 178.2;

    printf("�̸� = %s, ���� = %d, Ű = %.1f\n", Friend.Name, Friend.Age, Friend.Height);
    return 0;
}
