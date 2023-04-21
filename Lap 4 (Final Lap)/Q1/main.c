#include <stdio.h>
#include <stdlib.h>
#include "string_rev.h"


int main()
{
    char mystr[20];
    gets(mystr);
    string_reverse(mystr);
    printf("String after reverse= %s", mystr);
    return 0;
}




