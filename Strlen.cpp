#include <stdio.h>
#include "names_of_strfun.h"

int Strlen (const char *start)
{
    int i = 0;
    while (*start != '\0')
    {
        i++;
        start++;
    }

    return i;

}
