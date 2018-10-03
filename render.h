#include<stdio.h>
#include<time.h>
#ifndef _RENDER_H_
#define _RENDER_H_
int getTermColor(int r, int g, int b) {
    return 16+36*r+6*g+b;
}
typedef struct{
    int x;
    int y;
    int health;
    int attack;
    int hujia;
}play;
void rend(char map[1026][1026],play player){
    int i,j;    
    printf("\033[H\033[J");
    for(i=player.y-12;i<player.y+11;i++){
        for(j=player.x-42;j<player.x+41;j++){
            if(i==player.y&&j==player.x)
                printf("\033[31;47mp\033[0m");
                
            else if(map[i][j]!=0)
                printf("\033[48;5;%dm \033[0m",getTermColor(1,map[i][j]/2+0.5,0));
            else if(map[i][j]==0)
                printf(" ");
        }
    }
}
#endif