#include <stdio.h>
#include "names_of_strfun.h"

int main()
{
    char String1[81] = "abcd";
    char String2[]   = "jolly";
    char String3[]   = "jolly";
    char  *ps;
    printf("len of %s is %d\n", String1, Strlen(String1));

    //Strlen_test();

    printf("concatenation of %s and %s is ", String1, String2);
    Strcat(String1, String2);

    printf("%s\n", String1);

    //Strcat_test();

    printf("Is str2 = str3? = %d\n", Strcmp(String2, String3));

    //Strcmp_test();

    printf("copy of str1 = %s and str2 = %s\n", String1, String2);

    Strcpy(String1, String2);
    printf("now str1 = %s\n", String1);

    //Strcpy_test();


    printf("Adress of String3[2] is %p, with Strchr it %p\n", &String3[2], Strchr(String3, 'l'));

    Strchr_test();

    getchar();
    return 0;
}

