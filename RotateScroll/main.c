#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Turboc.h>
#include <unistd.h> // for usleep function

#define WIDTH 40  // �ܼ��� �ʺ�
#define SCROLL_LENGTH 20  // ��ũ�ѵǴ� ���ڿ��� ����

void display(char* str, int start_pos) {
    int len = strlen(str);
    for (int i = 0; i < WIDTH; i++) {
        int pos = (start_pos + i) % len;
        putchar(str[pos]);
    }
    fflush(stdout);
}

int main() {
    char str[] = "This is a sample string that will be scrolled within a specific range.        ";
    int len = strlen(str);
    int start_pos = 0;

    // ������ ��ũ��
    for (int i = 0; i < 40; i++) {
        printf("\r");
        display(str, start_pos);
        start_pos = (start_pos + 1) % len;
        usleep(200000); // 0.2�� ���
    }

    // ���� ��ũ��
    for (int i = 0; i < 40; i++) {
        printf("\r");
        display(str, start_pos);
        start_pos = (start_pos - 1 + len) % len;
        usleep(200000); // 0.2�� ���
    }

    printf("\n");
    return 0;
}
