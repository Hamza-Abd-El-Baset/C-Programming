#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[]="Geeks";

    printf("Input is: %s\n\n",s);

    int s_size=sizeof(s)/sizeof(s[0]);

    char s_reversed [s_size];

    int i=0;
    int j=s_size-2;

    while(i<s_size-1)
    {
    s_reversed[i]=s[j];
    i++;
    j--;
    }
    s_reversed[i]='\0';

    printf("Output is: %s\n\n",s_reversed);

    return 0;
}
