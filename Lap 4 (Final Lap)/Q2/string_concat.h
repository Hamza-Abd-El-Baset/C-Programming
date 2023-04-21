#ifndef string_conc
#define string_conc


void string_concat(char str1[], char str2[])
{

//Getting size of str1
    int str1_size;
    int i;
    for (i=0; str1[i]!='\0'; i++)
    {

    }
    str1_size=i;


//Getting size of str2
    int str2_size;

    for (i=0; str2[i]!='\0'; i++)
    {

    }
    str2_size=i;


//Concatination of str1 & str2 into str1
    for(i=str1_size; i<=str1_size+str2_size; i++)
    {
        str1[i]=str2[i-str1_size];
    }

}

#endif
