#include <stdio.h>
#include "names_of_strfun.h"

void Strchr_test()
{
    char str1[] = "abcdefg";
    Strchr(str1, 'd') == &str1[3] ?  : INF_ABOUT_ERROR();

    char str2[] = "abcdefg";
    if (!(Strchr(str2, 'h') == NULL))
    {
        INF_ABOUT_ERROR()
    }

    char str3[] = "tralala";
    Strchr(str3, 'l') == &str3[3] ?  : INF_ABOUT_ERROR();
}

void Strcat_test()
{
    char str1[81] ="abc";
    char str2[81] ="cba";

    Strcmp("abccba", Strcat(str1, str2)) == 0      ?  : INF_ABOUT_ERROR();

    char str3[81] = "hello";
    char str4[] = " world";

    Strcmp("hello world", Strcat(str3, str4)) == 0 ?  : INF_ABOUT_ERROR();

    char str5[81] = "";
    char str6[] = "";

    Strcmp("", Strcat(str5, str6)) == 0            ?  : INF_ABOUT_ERROR();

    char str7[81] = "\0";
    char str8[] = "\0";

    Strcmp("", Strcat(str7, str8)) == 0            ? : INF_ABOUT_ERROR();

    char str9[] = "hello";
    char str10[] = "world";

    Strcmp("helloworld", Strcat(str9, str10)) == 0 ?  : INF_ABOUT_ERROR();
}

void Strcpy_test()
{
    char str1[64] = "tralala";
    char str2[]   = "abc";

    Strcmp(Strcpy(str1, str2), str2) == 0   ? : INF_ABOUT_ERROR();

    char str3[64] = "tralala";

    Strcmp(Strcpy(str1, "abc"), "abc") == 0 ? : INF_ABOUT_ERROR();

    char str5[64] = "tralala";
    char str6[]   = "";

    Strcmp(Strcpy(str1, str2), str2) == 0   ? : INF_ABOUT_ERROR();

    char str7[64] = "";
    char str8[]   = "tralala";

    Strcmp(Strcpy(str1, str2), str2) == 0   ? : INF_ABOUT_ERROR();

    char str9[64] = "\n";
    char str10[]   = "abc";

    Strcmp(Strcpy(str1, str2), str2) == 0   ? : INF_ABOUT_ERROR();

}

void Strcmp_test()
{
    Strcmp("ABC", "abc") == -1 ? :  INF_ABOUT_ERROR();

    Strcmp("abc", "ABC") ==  1 ? :  INF_ABOUT_ERROR();

    Strcmp("abc", "abc") ==  0 ? :  INF_ABOUT_ERROR();

    char str7[] ="ABCdef";
    char str8[] ="abc";
    Strcmp(str7, str8) == -1   ? :  INF_ABOUT_ERROR();

    Strcmp("", "") ==  0       ? :  INF_ABOUT_ERROR();
}

void Strlen_test()
{
    Strlen("abcd") == 5       ? : INF_ABOUT_ERROR();
    Strlen("abcd\n") == 6     ? : INF_ABOUT_ERROR();
    Strlen("abc\0") == 4      ? : INF_ABOUT_ERROR();
    Strlen("") == 1           ? : INF_ABOUT_ERROR();
    Strlen("abcd dcba") == 10 ? : INF_ABOUT_ERROR();
}

