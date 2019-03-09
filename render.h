#include<stdio.h>
#include<time.h>
#ifndef _rend_
#define _rend_
int getTermColor(int r, int g, int b) {
    return abs(16+36*r+6*g+b)/5;
}
typedef struct{
    short ax;
    short ay;
}angle;
typedef struct{
    short x;
    short y;
    double health;                                                        
    int attack;
    double hujia;
    angle as;
}play;
void rend(int map[2172][2172],play player){
    int i,j,k;    
    printf("\033[H\033[J");
    for(i=player.y-12;i<player.y+11;i++){
        for(j=player.x-21;j<player.x+20;j++){
            if(i==player.y&&j==player.x)
                printf("\033[31;47m人");
            else if(map[i][j]<310)
                printf("\033[48;5;%dm  ",getTermColor(1,map[i][j]/2+0.5,0));
            else if(map[i][j]==310)
                printf("\033[0m  ");
            else if(map[i][j]==311)
                printf("基");
            else if(map[i][j]==312)
                printf("矿");
        }
        printf("\n");
    }
}
#endif