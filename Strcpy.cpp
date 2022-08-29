#include <stdio.h>
#include "names_of_strfun.h"

char *Strcpy(char str1[], const char str2[])
{
    int   i = 0;
    int len = Strlen(str2);

    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
    return str1;
}
