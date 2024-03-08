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

    printf("弊 模备 捞抚捞 构具?\n");
    scanf("%s", &Friend.Name);
    printf("%s, %d技, %.1fcm", Friend.Name, Friend.Age, Friend.Height);

    return 0;
}
