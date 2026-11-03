#include <stdlib.h>
#include <stdio.h>

int main()
{
    char op;
    int nb1;
    int nb2;
    printf("Bonjour, choisi une opération (+,-,*,/ ,%%) : ");
    scanf("%c",&op);
    printf("Ecrit un nombre : ");
    scanf("%d",&nb1);
    printf("Ecrit un second nombre : ");
    scanf("%d",&nb2);
    if(op==43)
    {
        int res=nb1+nb2;
        printf("%d+%d=%d\n",nb1,nb2,res);
    }
    else if(op==45)
    {
        int res=nb1-nb2;
        printf("%d-%d=%d\n",nb1,nb2,res);
    }
    else if(op==42)
    {
        int res=nb1*nb2;
        printf("%d*%d=%d\n",nb1,nb2,res);
    }
    else if(op==47)
    {
        if(nb2!=0)
        {
            double n1b=nb1;
            double n2b=nb2;
            double res=n1b/n2b;
            printf("%d/%d=%.2f\n",nb1,nb2,res);
        }
        else
        {
            printf("division par 0 impossible\n");
        }
    }
    else if(op==37)
    {
        int res=nb1%nb2;
        printf("%d%%%d=%d\n",nb1,nb2,res);
    }
    else
    {
        printf("opération inconnu\n");
    }
    exit(0);
}
