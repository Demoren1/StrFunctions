#include <stdio.h>
#include "names_of_strfun.h"

void Strlen_test()
{

    printf("%s\n", (Strlen("abcd") == 5 ? "True" : "False"));
    printf("%s\n", (Strlen("abcd\n") == 6 ? "True" : "False"));
    printf("%s\n", (Strlen("abc\0") == 4 ? "True" : "False"));
    printf("%s\n", (Strlen("") == 1 ? "True" : "False"));
    printf("%s\n", (Strlen("abcd dcba") == 10 ? "True" : "False"));
}
