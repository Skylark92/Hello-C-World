#include <Turboc.h> // int MessageBox(HWND hWnd , LPCSTR lpText, LPCSTR lpCaption, UINT uType);
#define lpText "��ũ���� ���� ���� �׽�Ʈ�� ���� �޽��� �ڽ��Դϴ�." // include ���� ���� �ڸ��ϸ� ���� �߻�

int main()
{
    MessageBox(NULL, lpText, "����", MB_OK);
    return 0;
}
