#include <Turboc.h> // int MessageBox(HWND hWnd , LPCSTR lpText, LPCSTR lpCaption, UINT uType);
#define lpText "매크로의 주의 사항 테스트를 위한 메시지 박스입니다." // include 보다 먼저 자리하면 오류 발생

int main()
{
    MessageBox(NULL, lpText, "제목", MB_OK);
    return 0;
}
