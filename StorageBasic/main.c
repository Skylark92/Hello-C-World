#include <Turboc.h>
void func();

int global; // �Լ� �ܺο��� ����Ǿ����Ƿ� ��������

int main()
{
    int local; // main �Լ��� ��������

    // global = 1; // ����
    // local = 2; // ����

    // i = 3; // �Ұ���

    printf("global : %d, local : %d\n", global, local); // GNU GCC �����Ϸ��� local�� �ʱ�ȭ ���ֳ�?
    return 0;
}

void func()
{
    int i; // func �Լ��� ��������

    global = 1;
    // local = 2; // �Ұ���
    i = 3; // ����
}
