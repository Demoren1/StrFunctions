#include <stdio.h>
#include "names_of_strfun.h"

int Strlen (const char *start)
{
    const char *counter  = start;
    while (*(counter++) != '\0')
    {
        continue;
    }

    return counter - start;

}

/*
 strchr(start, '\0');
*/
