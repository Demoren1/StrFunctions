#include <stdio.h>
#include "names_of_strfun.h"

int Strcmp(const char *str1, const char *str2)
{
    int len1 = Strlen(str1);
    int len2 = Strlen(str2);
    int len  = (len1 < len2) ? len1 : len2;
    int diff = str1[0] - str2[0];

    for (int i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
        {
            diff = str1[i] - str2[i];
            diff = (diff > 0) ? 1 : -1;
            return diff;
        }
    }

    return diff;
}
