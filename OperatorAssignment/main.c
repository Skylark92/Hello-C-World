#include <stdio.h>
#include <stdlib.h>

int main()
{
    // �º����� ���� �������� ���ʿ� �� �� �ִ� ������,
    // �������� �޸𸮸� �����ϰ� �ְ�, ���� ������� �ٲ� �� �־�� �Ѵ�.

    //  1 = 2 + 3;
    //  a + b = 4;
    // ����� ������ �º����� �ƴϴ�.

    char str[12];
    //  str = "STRING"; // ���� �߻�
    // ���� ���� �ϴ� �Ǽ�, �迭�� �̸��� str�� �º����� �ƴϴ�.

    // ��� �����ڴ� ���� �� ���ϰ��� �����Ѵ�. (�����ڵ� ������ �Լ��� ��)
    // ���Կ����ڵ� ���Ե� �� �� ��ü�� �����Ѵ�.

    str[0] = 'S';
    str[1] = 'T';
    str[2] = 'R';
    str[3] = 'I';
    str[4] = 'N';
    str[5] = 'G';

    char str2[6] = "hello";

    puts(str);
    puts(str2);

    return 0;
}