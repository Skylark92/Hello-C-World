#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct tag_Friend {
        char Name[10];
        int Age;
        double Height;
    };

    // ����ü �迭 ��� ��
    struct tag_Friend arJuso[10];
    arJuso[5].Age = 30;

    // ����ü�� ���� �迭 ��� ��
    struct tag_Friend Friend;
    Friend.Name[0] = 'K';

    // �迭�� ���� ����ü�� ���� �迭 ��� ��
    arJuso[1].Name[2] = 'J';

    // ����ü ������ �迭 ��� ��
    struct tag_Friend *pJuso[10];
    int i;
    for (i = 0; i < 10; i++) {
        pJuso[i] = (struct tag_Friend *)malloc(sizeof(struct tag_Friend));
    }

    pJuso[3]->Age = 40;

    for (i = 0; i < 10; i++) {
        free(pJuso[i]);
    }
}
