#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Here is the multiplication table for number 3:\n\n");
    int i;

    for (i=1;i<=12;i++)
    {
    printf("%d x 3 = %d \n",i,i*3);
    }

    return 0;
}
