#include <stdlib.h>
#include <stdio.h>

int legal(int choix, char* info)
{
   if(choix<0)
      {
         printf("Erreur nombre trop petit\n");
         return(0);
      }
   else if(choix>8)
      {
         printf("Erreur nombre trop grand\n");
         return(0);
      }
   else
      {
         if(info[choix]!=' ')
         {
            printf("Erreur quelqu'un a déjà jouer ici\n");
            return(0);
         }
         else
         {
            return(1);
         }
      }
}

char* tictactoe(char* info,int turn)
{
   int test=0;
   int choix;
   int ret;
   while(test==0)
   {
      printf("Ou voulez vous jouez ? (donner un nombre entre 1 et 9) ");
      ret=scanf("%d",&choix);
      if (ret!=1)
      {
         printf("Bienvenue dans la limbo utilise ctrl+C pour partir :D\n");
      }
      choix=choix-1;
      test=legal(choix, info);
   }
   if(turn==0)
   {
      info[choix]='X';
   }
   else
   {
      info[choix]='O';
   }
   return(info);
}

char* bot(char* info)
{
   int i=0;
   while(info[i]!=' ')
   {
      i=i+1;
   }
   info[i]='O';
   printf("tour du bot :\n");
   return(info);
}

int fin(char* info,int player)
{
   int i=0;
   while(i!=4)
   {
      if(info[i]==info[i+1] && info[i+1]==info[i+2] && info[i]!=' ')
      {
         printf("victoire du joueur %d\n",player);
         return(1);
      }
      else if(info[i]==info[i+3] && info[i+3]==info[i+6] && info[i]!=' ')
      {
         printf("victoire du joueur %d\n",player);
         return(1);
      }
      i=i+1;
   }
   if(info[0]==info[4]&& info[4]==info[8] && info[0]!=' ')
   {
      printf("victoire du joueur %d\n",player);
      return(1);
   }
   else if(info[2]==info[4]&& info[4]==info[6] && info[2]!=' ')
   {
      printf("victoire du joueur %d\n",player);
      return(1);
   }
   else
   {
      i=0;
      while(info[i]!='\0')
      {
         if(info[i]==' ')
         {
            return(0);
         }
         i=i+1;
      }
      printf("Il y a égalité\n");
      return(1);
   }
}