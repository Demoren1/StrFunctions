#include <stdio.h>
#include "names_of_strfun.h"

void Strchr_test(int *errors, int *quantity_of_tests)
{
    char str1[] = "abcdefg";
    (*quantity_of_tests)++;

    if (!(Strchr(str1, 'd') == &str1[3]))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str2[] = "abcdefg";
    (*quantity_of_tests)++;

    if (!(Strchr(str2, 'h') == NULL))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str3[] = "tralala";
    (*quantity_of_tests)++;

    if (!(Strchr(str3, 'l') == &str3[3]))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }
}

void Strcat_test(int *errors, int *quantity_of_tests)
{
    char str1[81] ="abc";
    char str2[81] ="cba";
    (*quantity_of_tests)++;

    if (!(Strcmp("abccba", Strcat(str1, str2)) == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str3[81] = "hello";
    char str4[] = " world";
    (*quantity_of_tests)++;

    if (!(Strcmp("hello world", Strcat(str3, str4)) == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str5[81] = "";
    char str6[] = "";
    (*quantity_of_tests)++;

    if (!(Strcmp("", Strcat(str5, str6)) == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str7[81] = "\0";
    char str8[] = "\0";
    (*quantity_of_tests)++;

    if(!(Strcmp("", Strcat(str7, str8)) == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str9[] = "hello";
    char str10[] = "world";
    (*quantity_of_tests)++;

    if(!(Strcmp("helloworld", Strcat(str9, str10)) == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }
}

void Strcpy_test(int *errors, int *quantity_of_tests)
{
    char str1[64] = "tralala";
    char str2[]   = "abc";
    (*quantity_of_tests)++;
    if (!(Strcmp(Strcpy(str1, str2), str2) == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str3[64] = "tralala";
    (*quantity_of_tests)++;

    if(!(Strcmp(Strcpy(str1, "abc"), "abc") == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str5[64] = "tralala";
    char str6[]   = "";
    (*quantity_of_tests)++;

    if(!(Strcmp(Strcpy(str1, str2), str2) == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str7[64] = "";
    char str8[]   = "tralala";
    (*quantity_of_tests)++;

    if(!(Strcmp(Strcpy(str1, str2), str2) == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str9[64] = "\n";
    char str10[]   = "abc";
    (*quantity_of_tests)++;

    if(!(Strcmp(Strcpy(str1, str2), str2) == 0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

}

void Strcmp_test(int *errors, int *quantity_of_tests)
{
    (*quantity_of_tests)++;
    if(!(Strcmp("ABC", "abc") == -1))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    (*quantity_of_tests)++;
    if(!(Strcmp("abc", "ABC") ==  1))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    (*quantity_of_tests)++;
    if(!(Strcmp("abc", "abc") ==  0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    char str7[] ="ABCdef";
    char str8[] ="abc";
    (*quantity_of_tests)++;

    if(!(Strcmp(str7, str8) == -1))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    (*quantity_of_tests)++;

    if(!(Strcmp("", "") ==  0))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }
}

void Strlen_test(int *errors, int *quantity_of_tests)
{
    (*quantity_of_tests)++;
    if(!(Strlen("abcd") == 5))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    (*quantity_of_tests)++;
    if(!(Strlen("abcd\n") == 6))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    (*quantity_of_tests)++;
    if(!(Strlen("abc\0") == 4))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    (*quantity_of_tests)++;

    if(!(Strlen("") == 1))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }

    (*quantity_of_tests)++;
    if(!(Strlen("abcd dcba") == 10))
    {
        INF_ABOUT_ERROR();
        (*errors)++;
    }
}






