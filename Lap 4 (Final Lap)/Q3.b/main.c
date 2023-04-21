#include <stdio.h>
#include <stdlib.h>
#include "swap.h"

int main()
{
    int x;
    printf("Please enter x : \n");
    scanf("%d",&x);

    int y;
    printf("Please enter y : \n");
    scanf("%d",&y);

    swap(&x,&y);

    printf("After Swap: \n\nX= %d \n",x);
    printf("Y= %d \n",y);

    return 0;
}
