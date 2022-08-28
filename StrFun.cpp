#include <stdio.h>
#include "names_of_strfun.h"

int main()
{
    char String1[81] = "abcd";
    char String2[] = "jolly";
    char Test_str[81];
    printf("len of %s is %d\n", String1, Strlen(String1));

    //Strlen_test();

    printf("concatenation of %s and %s is ", String1, String2);
    Strcat(String1, String2);

    printf("%s\n", String1);

    //Strcat_test();

    getchar();
    return 0;
}

