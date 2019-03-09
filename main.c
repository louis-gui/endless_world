#include"render.h"
#include"term.h"
int map[2172][2172]={0};
main(){
    int i,j;
    int level=400;
    char c;
    char ska=0;
    int tongbi=100000000;
    play player={0};
    player.x=1086;
    player.y=1086;
    srand(time(NULL));
    noecho();
    for(i=0;i<2172;i++) {
        for(j=0;j<2172;j++){
                /*map[i][j]=rand()%3;
                if(map[i][j]==1)
                    map[i][j]=9;
                else if(map[i][j]==2)
                    map[i][j]=0;
                */
                map[i][j]=310;
        }
    }
    char a;
    rend(map, player);
    while(1){ 
        if(c=='b'&&ska==1)
           ska=0;
        else if(c=='b'&&ska==0)
            ska=1;;;;;
        if(ska==1){
            if(c=='a'&&tongbi>39999){
                map[player.x-player.as.ax][player.y-player.as.ay]=311;;;;;;;;;
                tongbi-=40000;
            }
            else if(c=='e'&&tongbi>9999){
                map[player.x-player.as.ax][player.y-player.as.ay]=312;;;;;
                tongbi-=10000;
            }
            ska=1;;
        }
        if(ska==0){
            if(map[player.y-1][player.x]<=0&&(c=='A'||c=='w')){
                player.y-=1;
                player.as.ax=0;
                player.as.ay=-1;
            }
            else if(map[player.y-1][player.x]<311&&map[player.y-1][player.x]>0&&(c=='A'||c=='w')){
                map[player.y-1][player.x]-=(level/50)*50;
            }
            if(map[player.y][player.x-1]<=0&&(c=='D'||c=='a')){
                player.x-=1;
                player.as.ay=0;
                player.as.ax=-1;
            }
            else if(map[player.y][player.x-1]>0&&map[player.y][player.x-1]<311&&(c=='D'||c=='a')){
                map[player.y][player.x-1]-=(level/50)*50;
            }
            if(map[player.y][player.x+1]<=0&&(c=='C'||c=='d')){
                player.x+=1;
                player.as.ax=1;
                player.as.ay=0;
            }
            else if(map[player.y][player.x+1]>0&&map[player.y][player.x+1]<311&&(c=='C'||c=='d')){
                map[player.y][player.x+1]-=(level/50)*50;
            }
            if(map[player.y+1][player.x]<=0&&(c=='B'||c=='s')){
                player.y+=1;
                player.as.ay=1;
                player.as.ax=0;
            }
            else if(map[player.y+1][player.x]>0&&map[player.y+1][player.x]<311&&(c=='B'||c=='s')){
                map[player.y+1][player.x]-=(level/50)*50;
            }
            //if(c!='w'&&c!='A'&&c!='a'&&c!='d'&&c!='D'&&c!='C'&&c!='B'&&c!='s')
              //  continue;
        }
        rend(map,player);
        printf("%d %d %d %d %d 经验:%d 铜币:%d\n",ska,player.as.ax,player.as.ay,player.x,player.y
        ,level/50*50,tongbi);
        c=getchar();
    }
}