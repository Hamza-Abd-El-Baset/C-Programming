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

    int max=arr[0];
    int max_index=0;

    int min=arr[0];

    for(i=1;i<arr_size;i++)
    {
    if(arr[i]>max)
    {
    max=arr[i];
    max_index=i;
    }
    if(arr[i]<min)
    min=arr[i];
    }


    int max2=min;

    for(i=0;i<arr_size;i++)
    {
    if(arr[i]>max2 && i != max_index)
    max2=arr[i];
    }

    printf("\nMaximum number in array is: %d\n\n",max);
    printf("Second Maximum number in array is: %d\n\n",max2);
    printf("Minimum number in array is: %d\n\n",min);


    return 0;
}
