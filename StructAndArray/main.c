#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ȸ�� �� ���� �Ż�
    typedef struct {
        char Name[10]; // �̸�
        int Age; // ����
        double Height; // Ű
    } tag_Friend;

    // ���Ƹ��� ���� ����
    typedef struct {
        char Name[16]; // ���Ƹ� �̸�
        int MemNum; // ȸ�� ��
        tag_Friend Member[50]; // ȸ�� ���
    } tag_Circle;

    // ���Ƹ� ���
    tag_Circle arCircle[10];

    // ���Ƹ� ����� ����Ű�� ������
    tag_Circle *pCircle;
    pCircle = arCircle;

    // 4��° ���Ƹ��� 3��° ȸ�� ����
    arCircle[4].Member[3].Age = 21;
    // pCircle�� ����Ű�� ���Ƹ��� 3��° ȸ���� ����
    pCircle->Member[3].Age = 22;
    // pCircle�� ����Ű�� ���Ƹ��� 3��° ȸ���� �̸� �� 2��° ����
    pCircle->Member[3].Name[2] = 'M';
    return 0;
}
