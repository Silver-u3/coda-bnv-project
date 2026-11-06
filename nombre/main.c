#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int max=100; //permet de réglé la difficulté du jeu
    int guess = 0;
    int essaie = 0; //permet d'obtenir le nombre de guess
    printf("Bienvenue au jeu du nombre mystère tu dois trouver un nombre entre 1 et %d.\n",max);
    printf("Si tu veut changer la difficulté du jeu entre un nouveau max pour le nombre : ");
    scanf("%d",&max);
    srand(time(NULL));
    int randint = rand() % max + 1;
    while(guess!=randint) //boucle de jeu
    {
        printf("Trouve le nombre tu est à %d guess : ",guess);
        scanf("%d",&guess);
        if(guess==max+64){
            printf("mod admin actif le nombre est %d",randint); //donne le nombre mystère
            essaie=9998; //permet d'évité la triche
        }
        else if(guess>max)
        {
            printf("ce nombre dépasse le max choisi pour rapelle ce dernier est de : %d",max);
        }
        else if(guess<1)
        {
            printf("ce nombre est inférieur à 1 il est trop petit");
        }
        else
        {
            if(guess>randint) //test
            {
                essaie=essaie+1;
                printf("%d est plus grand que le nombre.\n",guess);
            }
            else if(guess<randint)
            {
                essaie=essaie+1;
                printf("%d est plus petit que le nombre.\n",guess);
            }
            else if(guess==randint)
            {
                essaie=essaie+1;
                printf("Le nombre est bien %d ! Il t'a fallu %d guess pour un max égale à %d.\n",guess,essaie,max);
            }
            else //présent en cas d'erreur
            {
                printf("Il y a eu un problème merci de réessayer.\n");
            }
        }
    }
    exit(0);
}
