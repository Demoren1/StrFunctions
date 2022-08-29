#include <stdio.h>
#include "names_of_strfun.h"

char *Strcat(char *str1, const char *str2)
{
    int len_of_str1 = Strlen (str1);
    int len_of_str2 = Strlen (str2);
    int i = 0;

    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[len_of_str1 - 1 + i] = str2[i];
    }
    str1[len_of_str1 + i] = '\0';

    return str1;
}
