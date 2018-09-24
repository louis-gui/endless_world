#include<stdio.h>
typedef struct{
    int x;
    int y;
    int health;
    int attack;
    int hujia;
}play;
void rend(char map[1025][1025],play player){
    int i,j;
    for(i=player.x-40;i<player.x+39;i++){
        for(j=player.y-12;j<player.y+11;j++){
            if(i<0||j<0||i>1024||j>1025)
                printf(" ");
            else if(map[i][j])
                printf("\033[37;47m \033[0m");
            else if(i==player.x&&j==player.y)
                printf("\033[37;47m \033[0m");
            else
                printf(" ");
        }
    }
}