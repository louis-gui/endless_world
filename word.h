#include"render.h"
void cc(int map[2172][2172],int xp,play player,int tongbi,int zn,char cdm[26]){
	FILE *fp;
	int i,j;
	fp=fopen(cdm,"w");
	for(i=0;i<2172;i++){
		for(j=0;j<2172;j++){
			fprintf(fp,"%d ",map[i][j]);
		}
		fprintf(fp,"\n");
	}
	fprintf(fp,"%d %d %d %d %d %d %d %d %d %d",xp,zn,tongbi,player.x,player.y,player.health,player.hujia,player.attack,player.as.ax,player.as.ay);
}