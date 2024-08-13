#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *pName;
    int Age;
    double Height;
} tag_Friend;

int main()
{
    tag_Friend Albert = { NULL, 80, 165.0 };
    tag_Friend Kim;

    Albert.pName = (char *)malloc(32);
    strcpy(Albert.pName, "알버트 아인슈타인");

    Kim = Albert;
    printf("이름 = %s, 나이 = %d, 키 = %.1f\n", Kim.pName, Kim.Age, Kim.Height);

    strcpy(Albert.pName, "아이작 뉴튼");
    printf("이름 = %s, 나이 = %d, 키 = %.1f\n", Kim.pName, Kim.Age, Kim.Height);
    free(Albert.pName);
    free(Kim.pName);
    return 0;
}
