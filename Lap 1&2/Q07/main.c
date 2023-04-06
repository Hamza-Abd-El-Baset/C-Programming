#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Please enter the first number: ");
    fflush(stdin);
    scanf("%d",&x);

    printf("Please enter the second number: ");
    fflush(stdin);
    scanf("%d",&y);

    if(y!=0)
    {
    printf("\nQuotient= %d \n",x/y);
    printf("Remainder= %d \n",x%y);
    }
    else
    printf("\nYou can't divide by zero\n");



    return 0;
}
