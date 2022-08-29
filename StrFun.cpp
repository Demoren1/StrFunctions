#include <stdio.h>
#include "names_of_strfun.h"
int error_in_test       = 0;
int quantity_of_tests   = 0;
int main()
{
    char String1[81] = "abcd";
    char String2[]   = "jolly";
    char String3[]   = "jolly";
    char  *ps;
    printf("len of %s is %d\n", String1, Strlen(String1));

    printf("concatenation of %s and %s is ", String1, String2);

    Strcat(String1, String2);

    printf("%s\n", String1);

    printf("Is str2 = str3? = %d\n", Strcmp(String2, String3));

    printf("copy of str1 = %s and str2 = %s\n", String1, String2);

    Strcpy(String1, String2);

    printf("now str1 = %s\n", String1);

    printf("Adress of String3[2] is %p, with Strchr it %p\n", &String3[2], Strchr(String3, 'l'));

    Strchr_test();
    Strcat_test();
    Strcpy_test();
    Strcmp_test();
    Strlen_test();

    //printf("%d / %d. There are %d errors\n", (quantity_of_tests - error_in_test),
    //       error_in_test);

    getchar();
    return 0;
}

