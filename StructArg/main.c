#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Name[10];
    int Age;
    double Height;
} tag_Friend;

void OutFriend(tag_Friend f)
{
    printf("이름 = %s, 나이 = %d, 키 = %.1f\n", f.Name, f.Age, f.Height);
}

int main()
{
        tag_Friend Friend = { "이석우", 32, 168.9 };
        OutFriend(Friend);
    return 0;
}
