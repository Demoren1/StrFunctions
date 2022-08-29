#include <stdio.h>
#include "names_of_strfun.h"

void Strcat_test()
{
    char str1[81] ="abc";
    char str2[81] ="cba";

    printf("%s\n", (Strcmp("abccba", Strcat(str1, str2)) == 0) ? "True" : "False");

    char str3[81] = "hello";
    char str4[] = " world";

    printf("%s\n", (Strcmp("hello world", Strcat(str3, str4)) == 0) ? "True" : "False");

    char str5[81] = "";
    char str6[] = "";

    printf("%s\n", (Strcmp("", Strcat(str5, str6)) == 0) ? "True" : "False");

    char str7[81] = "\0";
    char str8[] = "\0";

    printf("%s\n", (Strcmp("", Strcat(str7, str8)) == 0) ? "True" : "False");

    char str9[] = "hello";
    char str10[] = "world";

    printf("%s\n", (Strcmp("helloworld", Strcat(str9, str10)) == 0) ? "True" : "False");
}
