#include <stdlib.h>
#include <stdio.h>

void print_game(char * info)
{
    printf("%c | %c | %c\n",info[0],info[1],info[2]);
    printf("---------\n");
    printf("%c | %c | %c\n",info[3],info[4],info[5]);
    printf("---------\n");
    printf("%c | %c | %c\n",info[6],info[7],info[8]);
}