#include <stdio.h>
#include "names_of_strfun.h"

const char *Strchr(const char *str, int sym)
{
    int i = 0;

    while((str[i] != sym) && (str[i] != '\0'))
    {
        i++;
    }
    return &(str[i]);
}
