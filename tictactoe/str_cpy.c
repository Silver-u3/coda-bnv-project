#include <stdlib.h>
#include <stdio.h>

int str_len(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i = i + 1;
    }
    return(i);
}

char *str_cpy(char * str)
{
    int len=str_len(str);
    int i=0;
    char * str_copy = malloc(len * sizeof(char));
    while(i!=len)
    {
        str_copy[i]=str[i];
        i=i+1;
    }
    return(str_copy);
}