#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={1,2,2,3,3,3,3,4,4,4,4,3,3,3};

    int arr_size=sizeof(arr)/sizeof(arr[0]);

    int max_cons_occur=1;
    int value=arr[0];
    int i=0;
    int occur=1;

    for(i=1;i<arr_size;i++)
    {
    if(arr[i]==arr[i-1])
    occur++;
    else
    occur=1;

    if(occur>max_cons_occur)
    {
    max_cons_occur=occur;
    value=arr[i];
    }

    }

    printf("The maximum occurence was for number %d \n",value);
    printf("It occured %d times consequently\n",max_cons_occur);


    return 0;
}
