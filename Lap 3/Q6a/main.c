#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[]= {1,5,20,13,27,22,35,30};
    int size=sizeof(array)/sizeof(array[0]);

    printf("Array Before Sorting: \n\n");
    print_array(array,size);

    bubble_sort(array,size);

    printf("\n\nArray After Bubble Sorting: \n\n");
    print_array(array,size);

    return 0;
}


void bubble_sort(int array[], int size)

{
    int i,j,temp;
    for(i=1; i<size; i++)
    {
        for(j=0; j<size-i; j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }

        }

    }

}

void print_array(int array[], int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        printf("Element [%d] = %d\n",i,array[i]);
    }

}

