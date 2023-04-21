#ifndef string_reverse
#define string_reverse


void string_reverse(char str[])
{
    int str_size;
    int i;
    for (i=0; str[i]!='\0';i++)
    {

    }
    str_size=i;


    int temp;
    for(i=0;i<str_size/2;i++)
    {
    temp=str[i];
    str[i]=str[str_size-1-i];
    str[str_size-1-i]=temp;
    }


}

#endif
