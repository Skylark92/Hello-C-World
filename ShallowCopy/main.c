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
    strcpy(Albert.pName, "�˹�Ʈ ���ν�Ÿ��");

    Kim = Albert;
    printf("�̸� = %s, ���� = %d, Ű = %.1f\n", Kim.pName, Kim.Age, Kim.Height);

    strcpy(Albert.pName, "������ ��ư");
    printf("�̸� = %s, ���� = %d, Ű = %.1f\n", Kim.pName, Kim.Age, Kim.Height);
    free(Albert.pName);
    free(Kim.pName);
    return 0;
}
