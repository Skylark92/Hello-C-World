#include <stdio.h>
#include <stdlib.h>

void Congratulation(int count)
{
    switch (count) {
    case 1:
        puts("�����մϴ�. �ְ� �����Դϴ�.");
        break;
    case 2:
        puts("����� �����Դϴ�.");
        break;
    case 3:
        puts("�� �� �ϼ̽��ϴ�.");
        break;
    case 4:
        puts("������ �ƴϱ���.");
        break;
    case 5:
        puts("�����Դϴ�.");
        break;
    case 6:
        puts("���� �� ����ϼž߰ڽ��ϴ�.");
        break;
    case 7:
        puts("���� ���Ͻô±���.");
        break;
    case 8:
        puts("���� �����Դϴ�.");
        break;
    default:
        puts("�������� ����� �� ������ ���� ������.");
        break;
    }
}

int main()
{
    Congratulation(3);
    return 0;
}
