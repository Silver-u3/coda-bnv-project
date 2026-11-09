#include <stdlib.h>
#include <stdio.h>

double add(double nb1,double nb2)
{
    return(nb1+nb2);
}
double sub(double nb1,double nb2)
{
    return(nb1-nb2);
}
double multi(double nb1,double nb2)
{
    return(nb1*nb2);
}
double divi(double nb1,double nb2)
{
    if(nb2!=0)
    {
        return(nb1/nb2);
    }
    else
    {
        printf("division par 0 impossible\n");
        return(0);
    }
}
double modulo(int nb1, int nb2)
{
    if(nb2!=0)
    {
        return(nb1%nb2);
    }
    else
    {
        printf("division par 0 impossible\n");
        return(0);
    }
}

double calcul(char op,double nb1,double nb2){
    if(op==43)
        {
            return(add(nb1,nb2));
        }
    else if(op==45)
        {
            return(sub(nb1,nb2));
        }
    else if(op==42)
        {
            return(multi(nb1,nb2));
        }
    else if(op==47)
        {
            return(divi(nb1,nb2));
        }
    else if(op==37)
        {
            return(modulo(nb1,nb2));
        }
        else
        {
            printf("opération inconnu\n");
            return(0);
        }
}