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

    strcpy(Friend.Name, "아무개");
    Friend.Age = 30;
    Friend.Height = 178.2;

    printf("이름 = %s, 나이 = %d, 키 = %.1f\n", Friend.Name, Friend.Age, Friend.Height);
    return 0;
}
