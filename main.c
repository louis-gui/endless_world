#include"map.h"
#include"render.h"
#include"term.h"
main(){
    printf("1\n");
    play player;
    printf("24\n");
    noecho();
    printf("1\n");
    mappale();
    printf("2\n");
    char c;
    printf("13\n");
    rend(map,player);
    printf("17\n");
    c=getchar();
    while(c!='q'){
        switch (c){
            case 'w'&&player.y>0:
                player.y-=1;
                break;
            case 'a'&&player.x>0:
                player.x-=1;
                break;
            case 's'&&player.y<1025:
                player.y+=1;
                break;
            case 'd'&&player.x<1025:
                player.x+=1;
        }
        c=getchar();
        rend(map,player);
    }
}