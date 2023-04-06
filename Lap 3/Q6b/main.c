#include <stdio.h>
#include <stdlib.h>

void selection_sort(int array[], int size);

int main()
{
    int array[]= {1,5,20,13,27,22,35,30};
    int size=sizeof(array)/sizeof(array[0]);

    printf("Array Before Sorting: \n\n");
    print_array(array,size);

    selection_sort(array,size);

    printf("\n\nArray After Selection Sorting: \n\n");
    print_array(array,size);

    return 0;
}


void selection_sort(int array[], int size)

{
    int i,j,temp,min_pos,min;
    for(i=0; i<size-1; i++)
    {
        min=array[i];
        min_pos=i;
        for(j=i+1; j<size; j++)
        {

            if(min>array[j])
            {
                min=array[j];
                min_pos=j;
            }

        }

        temp=array[i];
        array[i]=min;
        array[min_pos]=temp;

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

