#include <stdio.h>
#include "names_of_strfun.h"

void Strcat_test()
{
    char str1[81] ="abc";
    char str2[81] ="cba";

    printf("%s%s\n", str1, str2);
    Strcat(str1, str2);
    printf("%s\n", str1);

    char str3[81] = "hello";
    char str4[] = " world";


    printf("%s%s\n", str3, str4);
    Strcat(str3, str4);
    printf("%s\n", str3);

    char str5[81] = "";
    char str6[] = "";


    printf("%s%s\n", str5, str6);
    Strcat(str5, str6);
    printf("%s\n", str5);

    char str7[81] = "\0";
    char str8[] = "\0";


    printf("%s%s\n", str7, str8);
    Strcat(str7, str8);
    printf("%s\n", str7);

    char str9[] = "hello";
    char str10[] = "world";


    printf("%s%s\n", str9, str10);
    Strcat(str9, str10);
    printf("%s\n", str9);
}
