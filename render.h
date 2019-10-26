#include<stdio.h>
#include<time.h>
#ifndef _rend_
#define _rend_
int getTermColor(int r, int g, int b) {
    return abs(16+36*r+6*g+b)/5;
}
//┓┛┏┗━
typedef struct{
    short ax;
    short ay;
}angle;
typedef struct{
    short x;
    short y;
    short health;                                                        
    short attack;
    short hujia;
    angle as;
}play;
void rend(int zx,int map[2172][2172],play player){
    int i,j,k,id_i=0;    
    printf("\033[H\033[J");
    for(i=player.y-13;i<player.y+12;i++,id_i++){
        for(j=player.x-20;j<player.x+19;j++){
            if(i==player.y&&j==player.x)
                printf("人");
	    else if(map[i][j]==0)
		printf("路");
            else if(map[i][j]==zx)
                printf("  ");
	    else if(map[i][j]<10)
                printf("%d%d",map[i][j],map[i][j]);
	    else if(map[i][j]>9&&map[i][j]<100)
		printf("%d",map[i][j]);
            else if(map[i][j]==311)
                printf("基");
            else if(map[i][j]==312)
                printf("矿");
        }
        printf("\n");
    }
}
#endif
