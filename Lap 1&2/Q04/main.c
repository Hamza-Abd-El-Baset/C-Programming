#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , num2;
    printf("Please Enter the first number: \n");
    fflush(stdin);
    scanf("%d",&num1);

    printf("Please Enter the second number: \n");
    fflush(stdin);
    scanf("%d",&num2);

    printf("The sum of the two numbers is: %d",num1+num2);



    return 0;
}
