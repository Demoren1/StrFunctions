#include <stdio.h>
#include "names_of_strfun.h"

void Strcpy_test()
{
    char str1[64] = "tralala";
    char str2[]   = "abc";

    printf("%s\n", (Strcmp(Strcpy(str1, str2), str2) == 0) ? "True" : "False");

    char str3[64] = "tralala";

    printf("%s\n", (Strcmp(Strcpy(str1, "abc"), "abc") == 0) ? "True" : "False");

    char str5[64] = "tralala";
    char str6[]   = "";

    printf("%s\n", (Strcmp(Strcpy(str1, str2), str2) == 0) ? "True" : "False");

    char str7[64] = "";
    char str8[]   = "tralala";

    printf("%s\n", (Strcmp(Strcpy(str1, str2), str2) == 0) ? "True" : "False");

    char str9[64] = "\n";
    char str10[]   = "abc";

    printf("%s\n", (Strcmp(Strcpy(str1, str2), str2) == 0) ? "True" : "False");

}
