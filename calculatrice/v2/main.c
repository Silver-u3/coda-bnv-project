#include <stdlib.h>
#include <stdio.h>
#include "operations.h"

int main()
{
    char op;
    double nb1;
    double nb2;
    printf("Bonjour, choisi une opération (+,-,*,/ ,%%) : ");
    scanf("%c",&op);
    printf("Ecrit un nombre : ");
    scanf("%lf",&nb1);
    printf("Ecrit un second nombre : ");
    scanf("%lf",&nb2);
    double result;
    result=calcul(op,nb1,nb2);
    if(op==47)
    {
        printf("%.0f%c%.0f=%.2f\n",nb1,op,nb2,result);
    }
    else
    {
        printf("%.0f%c%.0f=%.0f\n",nb1,op,nb2,result);
    }
    exit(0);
}
