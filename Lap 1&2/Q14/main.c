#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

int main()
{

    printf("Let's start Magic Square\n\n");
    printf("What is the order of the square?\n");

    unsigned short int order=0;
    do{
    printf("Please enter an odd number\n");
    if(!scanf("%hu",&order))
        {order=0;
        char dummy [10];
        scanf("%s",&dummy);
        }
    }
    while(order%2==0);

    clear();

    int value=1;
    int row=1;
    int col=(order+1)/2;

    do
    {
    gotoxy(col*5,row*2);
    printf("%5d",value);



    if(value%order==0)
    row++;
    else
    {
    row--;
    col--;
    }

    if(row==0)
    row=order;
    if(col==0)
    col=order;

    value++;

    }
    while(value<=order*order);

    printf("\n\nMade by Hamza Abd El-Baset\nThank you very much\n");


    return 0;
}
