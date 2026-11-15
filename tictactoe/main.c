#include <stdlib.h>
#include <stdio.h>
#include "tictactoe.h"
#include "str_cpy.h"
#include "print_game.h"

int main()
{
   char * info = malloc(10 *sizeof(char));
   int set=0;
   while (set!=9)
   {
      info[set]=' ';
      set=set+1;
   }
   info[9]='\0';
   int finish=0;
   int turn=0;
   int joueur;
   int nowarn;
   printf("Combien de joueur joue : ");
   nowarn=scanf("%d",&joueur);
   if(nowarn==1)
   {
      nowarn=1+1;
   }
   while (finish==0)
   {
      print_game(info);
      info=tictactoe(info,turn);
      finish=fin(info,turn+1);
      print_game(info);
      if (joueur==2)
      {
         if(turn==0)
         {
            turn=1;
         }
         else
         {
            turn=0;
         }
      }
      else if(finish==0)
      {
         bot(info);
         finish=fin(info,2);
      }
      else
      {
         printf("Bravo");
      }
   }
   free(info);
   exit(0);
}