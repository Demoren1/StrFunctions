#include <stdio.h>
#include "names_of_strfun.h"

const char *Strchr(const char *str, int sym)
{
    int i = 0;
    int len = Strlen(str);

    while((i < len) && (str[i] != sym))
    {
        i++;
    }

    if ((sym != '\0') && (i == len))
    {
        return NULL;
    }
    else
    {
        return (str+i);
    }
}


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

int Strlen (const char *start)
{
    const char *counter  = start;
    while (*(counter++) != '\0')
    {
        continue;
    }

    return counter - start;

}





































