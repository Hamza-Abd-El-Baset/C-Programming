#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int num1 , num2;

    printf("Please enter the first number: \n");
    fflush(stdin);
    scanf("%d",&num1);

    printf("Please enter the second number: \n");
    fflush(stdin);
    scanf("%d",&num2);

    long long int sum=num1+num2;
    long long int sub=num1-num2;
    long long int mul=num1*num2;



    printf("Summation= %lld \n",sum);
    printf("Subtraction= %lld \n",sub);
    printf("Multiplication= %lld \n",mul);

    if(num2!=0){
    float div=(float)num1/num2;
    printf("Division= %.2f \n",div);
    }

    else
    printf("You can't divide by zero");

    return 0;
}
