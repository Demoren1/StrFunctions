#include <string.h>

int Strlen(const char *str);

void Strlen_test(int *errors, int *quantity_of_tests);

char *Strcat(char *str1, const char *str2);

void Strcat_test(int *errors, int *quantity_of_tests);

int Strcmp(const char *str1, const char *str2);

void Strcmp_test (int *errors, int *quantity_of_tests);

char *Strcpy(char str1[], const char str2[]);

void Strcpy_test(int *errors, int *quantity_of_tests);

const char *Strchr(const char *str, int sym);

void Strchr_test(int *errors, int *quantity_of_tests);

#define INF_ABOUT_ERROR()                                                  \
            printf("\nWrong result in %d line, %s path, %s function \n",   \
                   __LINE__, __FILE__, __PRETTY_FUNCTION__);

enum Bool_V
{
    True  = 1,
    False = 0
};
