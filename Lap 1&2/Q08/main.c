#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;

    printf("Please enter three integers:\n");
    fflush(stdin);
    scanf("%d",&num1);

    fflush(stdin);
    scanf("%d",&num2);

    fflush(stdin);
    scanf("%d",&num3);


    int max=num1;

    if(num2>max)
    max=num2;

    if(num3>max)
    max=num3;

    printf("\nMaximum number amont the three numbers is: %d",max);
    return 0;
}
