#include"map.h"
#include"render.h"
#include"term.h"
main(){
    int i,j,r,g,b;
    for(r=5;r>=0;r--) {
        printf("\033[48;5;226m\033[38;5;%dm%d\033[0m\n", getTermColor(3,r,0), getTermColor(3,r,0));
    }
    for(r=0;r<6;r++)
        for(g=0;g<6;g++)
            for(b=0;g<6;g++)
                printf("\033[38;5;%dm%d\033[0m\n", getTermColor(r,g,b), getTermColor(r,g,b));
    play player;
    player.x=513;
    player.y=513;
    srand(time(NULL));
    noecho();
    for(i=0;i<1026;i++)
        for(j=0;j<1026;j++){
                /*map[i][j]=rand()%3;
                if(map[i][j]==1)
                    map[i][j]=9;
                else if(map[i][j]==2)
                    map[i][j]=0;
                */
                map[i][j]=60;

        }
    mappale();
    char c;
    rend(map,player);
    while(1){
        c=getchar();
        if(map[player.y-1][player.x]==0&&(c=='A'||c=='w'))
            player.y-=1;
        else if(map[player.y-1][player.x]!=0&&c=='A'||c=='w')
            map[player.y-1][player.x]--;
        if(map[player.y][player.x-1]==0&&(c=='D'||c=='a'))
            player.x-=1;
        else if(map[player.y][player.x-1]!=0&&c=='D'||c=='a')
            map[player.y][player.x-1]--;
        if(map[player.y][player.x+1]==0&&(c=='C'||c=='d'))
            player.x+=1;
        else if(map[player.y][player.x+1]!=0&&c=='C'||c=='d')
            map[player.y][player.x+1]--;
        if(map[player.y+1][player.x]==0&&(c=='B'||c=='s'))
            player.y+=1;
        else if(map[player.y+1][player.x]!=0&&c=='B'||c=='s')
            map[player.y+1][player.x]--;
        if(c!='w'&&c!='A'&&c!='a'&&c!='d'&&c!='D'&&c!='C'&&c!='B'&&c!='s')
            continue;
        rend(map,player);
    }
}