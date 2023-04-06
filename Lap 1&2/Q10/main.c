#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    printf("Enter a character: \n");

    char ch;

    scanf("%c",&ch);

    if(isalpha(ch))
    printf("The caharcter is an alphapet\n");

    else
    printf("The caharcter is not an alphapet\n");

    return 0;
}
