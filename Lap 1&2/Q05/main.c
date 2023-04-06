#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please enter an integer to know its hexa format: \n");
    int num;
    fflush(stdin);
    scanf("%d",&num);

    printf("The hexa format is: %x",num);
    return 0;
}
