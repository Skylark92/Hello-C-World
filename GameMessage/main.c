#include <stdio.h>
#include <stdlib.h>

void Congratulation(int count)
{
    static char *Message[] = {
        "",
        "�����մϴ�. �ְ� �����Դϴ�.",
        "����� �����Դϴ�.",
        "�� �� �ϼ̽��ϴ�.",
        "������ �ƴϱ���.",
        "�����Դϴ�.",
        "���� �� ����ϼž߰ڽ��ϴ�.",
        "���� ���Ͻô±���.",
        "���� �����Դϴ�.",
        "�������� ����� �� ������ ���� ������.",
    };

    if (count >= 9) count = 9;
    puts(Message[count]);
}

int main()
{
    Congratulation(3);
    return 0;
}
