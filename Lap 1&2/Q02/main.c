#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please Enter a character to know its ASCII number:\n");

    unsigned char ch;
    fflush(stdin);
    scanf("%c",&ch);

    printf("\nASCII number of character %c is: %d",ch,ch);

    return 0;
}
