#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Name[10];
    int Age;
    double Height;
} tag_Friend;

tag_Friend GetFriend()
{
    tag_Friend t;

    strcpy(t.Name, "아무개");
    t.Age = 22;
    t.Height = 177.7;

    return t;
}

int main()
{
    tag_Friend Friend;

    Friend = GetFriend();
    printf("이름 = %s, 나이 = %d, 키 = %.1f\n",
           Friend.Name, Friend.Age, Friend.Height);
    return 0;
}
