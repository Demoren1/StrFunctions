#include <stdio.h>
#include "names_of_strfun.h"

void Strchr_test()
{
    char str1[] = "abcdefg";
    printf("%s\n", (Strchr(str1, 'd') == &str1[3]) ? "True" : "False");

    char str2[] = "abcdefg";
    printf("%s\n", (*(Strchr(str2, 'h')) == '\0') ? "True" : "False");

    char str3[] = "tralala";
    printf("%s\n", (Strchr(str3, 'l') == &str3[3]) ? "True" : "False");
}
