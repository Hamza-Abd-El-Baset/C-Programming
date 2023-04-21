#include <stdio.h>
#include <stdlib.h>
#include "string_concat.h"


int main()
{
    char str1[60];
    printf("Please Enter First String\n");
    gets(str1);

    char str2[20];
    printf("Please Enter Second String\n");
    gets(str2);

    string_concat(str1,str2);
    printf("Str1 after concatination= %s\n", str1);
    return 0;
}



