#include <stdio.h>
#include <stdlib.h>
#include <Turboc.h>

void my_puts(const char *str)
{
    while (*str) putch(*str++);
    putch('\n');
}

void my_puts2(const char *str)
{
    int i;

    for (i = 0; str[i]; i++) {
        putch(str[i]);
    }
    putch('\n');
}

char *my_strcpy(char *dest, const char*src)
{
    char *d = dest;
    while (*dest++ = *src++) {;}
    return d;
}

size_t my_strlen(const char *str)
{
    const char *p;

    for (p = str; *p; p++) {;}
    return p-str;
}

size_t my_strlen2(const char *str)
{
    int i;

    for (i = 0; str[i]; i++) {;}
    return i;
}

char *my_strcat(char *dest, const char *src)
{
    my_strcpy(dest+my_strlen(dest), src);
    return dest;
}

char *my_strchr(const char *string, int c)
{
    while (*string) {
        if (*string == c) {
            return (char *)string;
        }
        string++;
    }
    return NULL;
}

char *my_strstr(const char *string, const char *strSearch)
{
    const char *s, *sub;

    for (; *string; string++) {
        for (sub = strSearch, s = string; *sub && *s && *s == *sub; sub++, s++) {;}
        if (*sub == 0) return (char *)string;
    }
    return NULL;
}

int main()
{
    char dest[256];

    my_puts("Korea");
    my_puts2("한글도 잘 된다.");

    my_puts(my_strcpy(dest, "my string copy function test"));

    printf("문자열의 길이는 %d입니다.\n", my_strlen("1234"));
    printf("문자열의 길이는 %d입니다.\n", my_strlen2("123456789"));

    char str[128] = "abcd";
    my_puts(my_strcat(str, "efgh"));

    printf("o가 %s습니다.\n", my_strchr("notebook", 'o') == NULL ? "없" : "있");
    printf("z가 %s습니다.\n", my_strchr("notebook", 'z') == NULL ? "없" : "있");
    printf("under가 %s습니다.\n", my_strstr("misunderstand", "under") == NULL ? "없" : "있");
    printf("above가 %s습니다.\n", my_strstr("misunderstand", "above") == NULL ? "없" : "있");
    return 0;
}
