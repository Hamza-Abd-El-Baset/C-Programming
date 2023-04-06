#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int arr_size;

    printf("Please enter array size:\n");
    while(!scanf("%d",&arr_size))
    {
    char dummy[10];
    scanf("%c",&dummy);
    printf("Please enter a number:\n");
    }

    int i;

    for(i=0;i<arr_size;i++)
    {
    printf("Please enter element[%d]:\n",i);
    while(!scanf("%d",&arr[i]))
    {
    char dummy[10];
    scanf("%c",&dummy);
    printf("Please enter a number:\n");
    }
    }

    printf("\nArray elements are as follows:\n\n");

    for(i=0;i<arr_size;i++)
    {
    printf("Element[%d]: %d\n",i,arr[i]);
    }
    return 0;
}
