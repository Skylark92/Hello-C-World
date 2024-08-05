#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *stristr(const char *string, const char *strSearch)
{
        const char *s, *sub;

        for (; *string; string++) {
            for (sub = strSearch, s = string; *sub && *s; sub++, s++) {
                if (tolower(*s) != tolower(*sub)) break;
            }
            if (*sub == 0) return (char *)string;
        }
        return NULL;
}

char *stristr2(const char *string, const char *strSearch)
{
    char *scopy, *srchcopy, *p;

    scopy = (char *)malloc(strlen(string) + 1);
    strcpy(scopy, string);
    strlwr(scopy);
    srchcopy = (char *)malloc(strlen(strSearch) + 1);
    strcpy(srchcopy, strSearch);
    strlwr(srchcopy);

    p = strstr(scopy, srchcopy);
    free(scopy);
    free(srchcopy);

    if (p == NULL) {
        return NULL;
    } else {
        return (char*)string + (p - scopy);
    }
}

int main()
{
    if (stristr2("madeINkorea", "inko")) {
        puts("찾는 문자열이 있습니다.");
    } else {
        puts("찾는 문자열이 없습니다.");
    }
    return 0;
}
