#ifndef swap_function
#define swap_function

void swap(int *x, int *y)

{
    *x=*x * *y;
    *y=*x / *y;
    *x=*x / *y;
}

#endif
