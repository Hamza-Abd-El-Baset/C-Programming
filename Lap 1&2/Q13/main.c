#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=10;i>=1;i--)
    {
    printf("Table %d:\n\n",i);
    for(j=1;j<=12;j++)
    {
    printf("%d x %d = %d\n",i,j,i*j);
    }
    printf("*************************************************************\n");
    }
    return 0;
}
