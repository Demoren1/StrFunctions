#include <stdio.h>
#include "names_of_strfun.h"

void Strcmp_test()
{
    printf("%s\n", (Strcmp("ABC", "abc") == -1) ? "True" :  "False");

    printf("%s\n", (Strcmp("abc", "ABC") ==  1) ? "True" :  "False");

    printf("%s\n", (Strcmp("abc", "abc") ==  0) ? "True" :  "False");

    char str7[] ="ABCdef";
    char str8[] ="abc";
    printf("%s\n", (Strcmp(str7, str8) == -1) ? "True" :  "False");

    printf("%s\n", (Strcmp("", "") ==  0) ? "True" :  "False");
}
