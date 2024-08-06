#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertstr(char *str, const char *insert)
{
    int len;

    len = strlen(insert);
    memmove(str + len, str, strlen(str) + 1);
    memcpy(str, insert, len);
}

void deletestr(char *str, int count)
{
    memmove(str, str + count, strlen(str +count) + 1);
}

void strreplace(char *str, const char *a, const char *b)
{
    char *p;

    for (;;) {
        p = strstr(str, a);
        if (p == NULL) return;
        deletestr(p, strlen(a));
        insertstr(p, b);
    }
}

int main()
{
    char str[128] = "welcome to korea";
    char str2[512] = "���� �׸� �⸰ �׸��� �� �⸰�� �׸� �⸰ �׸��̰� "
        "�װ� �׸� �⸰ �׸��� �� �⸰�� �׸� �⸰ �׸��̴�.";
    char *p;

    puts(str);
    p = strstr(str, "korea");
    insertstr(p, "beautiful ");
    puts(str);
    p = strstr(str, "to ");
    deletestr(p, 3);
    puts(str);

    puts(str2);
    strreplace(str2, "�⸰", "������ź");
    puts(str2);

    return 0;
}
