#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int max=100; //permet de réglé la difficulté du jeu
    srand(time(NULL));
    int randint = rand() % max + 1;
    int guess = 0;
    int essaie = 0;
    printf("Bienvenue au jeu du nombre mystère tu dois trouver un nombre entre 1 et %d.\n",max);
    while(guess!=randint) //boucle de jeu
    {
        printf("Trouve le nombre : ");
        scanf("%d",&guess);
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
            printf("Le nombre est bien %d ! Il t'a fallu %d guess.\n",guess,essaie);
        }
        else //présent en cas d'erreur
        {
            printf("Il y a eu un problème merci de réessayer.\n");
        }
    }
    exit(0);
}
