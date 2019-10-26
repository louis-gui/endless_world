#include"term.h"
#include"word.h"
#ifndef _main_
#define _main_
//┓┛┏┗━
int zx=9;
int map[2172][2172]={10};
int main(void){
	int i,j,xp=150;
	int level=1;
	long long zn=0;
	char c;
	char ska=0;
	int tongbi=100;
	play player={0};
	player.x=1086;
	player.y=1086;
	noecho();
	char b;
	int zx=10;
	FILE *fp=freopen("桂晨轩的无尽大陆实验版存档","r",stdin);
//	for(i=0;i<2172;i++) {
//		for(j=0;j<2156;j++){
//			fscanf(fp,"%d ",map[i]);
//			printf("%d %d ",i,j);
//		}
//	}
	for(i=0;i<2172;i++){
		for(j=0;j<6516;j++){
			b=fgetc(stdin);
			map[i][j/3]+=b<'0'||b>'0'?0:b-'0';
	//		if(b<'0'||b>'0'&&b!=' '&&b!='\n'){
	//			break;
	//			ska=1;
	//		}
			if(i==2171&&i==6515){
				ska=1;
				break;
			}
			printf("b%c i%d j%d",b,i,j);
		}  
		if(ska==1)
			break;
   		printf("\n");
	}
	ska=0;
	fscanf(fp,"%d %d %d %d %d",xp,zn,tongbi,player.x,player.y);
	char a;
	fclose(fp);
	printf("yes!\n");
	rend(zx,map, player);
	for(i=0;i<2172;i++)
		for(j=0;j<2172;j++)
			map[i][j]=10;
	while(1){
		if(player.x<42)
			player.x=2172-43;
		if(player.x>2172-43)
			player.x=42;
		if(player.y<14)
			player.y=2172-15;
		if(player.y>2172-15)
			player.y=14;
		level=xp/150;
		if(c=='y'&&ska==2)
			ska=0;
		else if(c=='y'&&ska!=2)
			ska=2;
		if(c=='b'&&ska==1)
			ska=0;
		else if(c=='b'&&ska!=1)
			ska=1;;;;;
		if(ska==1){
			if(c=='a'&&tongbi>39){
				map[player.y-player.as.ay][player.x-player.as.ax]=311;;;;;;;;;
				tongbi-=40;
			}
			else if(c=='e'&&tongbi>59){
				map[player.y-player.as.ay][player.x-player.as.ax]=312;;;;;
				tongbi-=10;
			}
		}
		else if(ska==0){
			if(map[player.y-1][player.x]<=0&&(c=='A'||c=='w')){
				player.y-=1;
				player.as.ax=0;
				player.as.ay=-1;
			}
			else if(map[player.y-1][player.x]<zx+1&&map[player.y-1][player.x]>0&&(c=='A'||c=='w')){
				if(map[player.y-1][player.x]>level)
					map[player.y-1][player.x]-=level;
				else{
					map[player.y-1][player.x]=0;
					xp+=1;
				}
			}
			if(map[player.y][player.x-1]<=0&&(c=='D'||c=='a')){
				player.x-=1;
				player.as.ay=0;
				player.as.ax=-1;
			}
			else if(map[player.y][player.x-1]>0&&map[player.y][player.x-1]<zx+1&&(c=='D'||c=='a')){
				if(map[player.y][player.x-1]>level)
					map[player.y][player.x-1]-=level;
				else{
					map[player.y][player.x-1]=0;
					xp+=1;
				}
			}
			if(map[player.y][player.x+1]<=0&&(c=='C'||c=='d')){
				player.x+=1;
				player.as.ax=1;
				player.as.ay=0;
			}
			else if(map[player.y][player.x+1]>0&&map[player.y][player.x+1]<zx+1&&(c=='C'||c=='d')){
				if(map[player.y][player.x+1]>level)
					map[player.y][player.x+1]-=level;
				else{
					map[player.y][player.x+1]=0;
					xp+=1;
				}
			}
			if(map[player.y+1][player.x]<=0&&(c=='B'||c=='s')){
				player.y+=1;
				player.as.ay=1;
				player.as.ax=0;
			}
			else if(map[player.y+1][player.x]>0&&map[player.y+1][player.x]<zx+1&&(c=='B'||c=='s')){
				if(map[player.y+1][player.x]>level)
					map[player.y+1][player.x]-=level;
				else{
					map[player.y+1][player.x]=0;
					xp+=1;
				}
			}
		}
//		else if(c=='q')
//				break;
		else{
			if(c=='x'&&xp>200){
				xp-=10;
				tongbi++;
			}
		}
	//	if(c=='q')
	//		break;
		rend(zx,map,player);
		printf("%d  %d %d lvl:%d xp:%d 回合数:%d 金币:%d 银币:%d 铜币:0\n",ska,player.x,player.y,level,xp,zn,tongbi);
		c=getchar();
		zn++;
		if(c=='\\')
			break;
		if(zn%1200==0&&zn<180000&&zn!=0){
			for(zx++,i=0;i<2172;i++){
	   			for(j=0;j<2172;j++){
					if(map[i][j]!=0&&map[i][j]!=311&&map[i][j]!=312)
						map[i][j]=zx;
				}
			}
		}
	}
	cc(map,xp,player,tongbi,zn,"桂晨轩的无尽大陆实验版存档");
	return 0;
}
#endif