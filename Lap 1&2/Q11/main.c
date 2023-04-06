#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,num;
    sum=0;
    printf("Please enter an integer number\n");
    scanf("%d",&num);
    sum+=num;

    while(sum<100)
    {
    printf("The sum didn't reach 100\nPlease enter another number\n");
    scanf("%d",&num);
    sum+=num;
    }

    printf("The sum became %d \nThe game ended\n",sum);

    return 0;
}
