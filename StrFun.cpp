#include <stdio.h>
#include "names_of_strfun.h"

int main()
{
    int errors = 0, quantity_of_tests = 0;
    char String1[81] = "abcd";
    char String2[]   = "jolly";
    char String3[]   = "jolly";

    printf("len of %s is %d\n", String1, Strlen(String1));

    printf("concatenation of %s and %s is ", String1, String2);

    Strcat(String1, String2);

    printf("%s\n", String1);

    printf("Is str2 = str3? = %d\n", Strcmp(String2, String3));

    printf("copy of str1 = %s and str2 = %s\n", String1, String2);

    Strcpy(String1, String2);

    printf("now str1 = %s\n", String1);

    printf("Adress of String3[2] is %p, with Strchr it %p\n", &String3[2], Strchr(String3, 'l'));

    Strchr_test(&errors, &quantity_of_tests);
    Strcat_test(&errors, &quantity_of_tests);
    Strcpy_test(&errors, &quantity_of_tests);
    Strcmp_test(&errors, &quantity_of_tests);
    Strlen_test(&errors, &quantity_of_tests);

    printf("%d / %d. There are %d error(s)\n", (quantity_of_tests - errors), quantity_of_tests,
            errors);

    getchar();
    return 0;
}

