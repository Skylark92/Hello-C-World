#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct {
        char Name[10];
        int Age;
        double Height;
    } Friend;

    Friend.Age = 28;
    Friend.Height = 160;

    printf("�� ģ�� �̸��� ����?\n");
    scanf("%s", &Friend.Name);
    printf("%s, %d��, %.1fcm", Friend.Name, Friend.Age, Friend.Height);

    return 0;
}
