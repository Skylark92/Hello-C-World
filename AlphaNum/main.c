#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

int main()
{
    // ���� �ҹ��ڷ� ������ �� ������ �Է� �޾�
    // �� ���ڿ� ���� �� ���ĺ� ���� ������ ���� ����϶�.

    int alpha[26] = { 0 };
    char input[101];
    int i;

    printf("�Է��� �޽��ϴ�. �ִ� 100��\n");

    scanf("%100[a-z]", &input);

    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            alpha[input[i] - 'a']++;
        }
    }

    for (i = 0; i < sizeof(alpha) / sizeof(alpha[0]); i++) {
        printf("%c : %d\n", i + 'a', alpha[i]);
    }
    return 0;
}
