#include<stdio.h>
#include<time.h>
/*int pow(int ys,int cf){
    int i;
    for(i=0;i++;i<cf){
        ys*=ys;
    }
    return ys;
}*/
/*
int i_zss(int a){
    int i=0,j=0;
    for(i=9;i>0;i--){
        if(a/pow(10,i)==1||i==1)
            return 9-i;
    }
}*/
typedef struct{
    int huace[100];
    long long blk;
}play;
int main(){
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
    srand(time(0));
   // printf(">");
    play player[2];
    //printf("yes\n");
   // FILE *fp;
//    printf("ilob\n");
  //  &fp=fopen("ilym",'w');
   // printf("???\n")?????;
    int a,i,j;
    for(;;){
        scanf("%d ",a);
        if(a%3||a>100)
            continue;
        else
            break;
    }   
    for(j=0;j<2;j++){
        for(i=0;i<a;i++){
            player->huace[i]=rand()%7;
        }
        for(i=0;i<a;i++)
            if(player->huace[i]==1){
                a1+=1;
            }
            else if(player->huace[i]==2){
                a2+=1;
            }
            else if(player->huace[i]==3){
                a3+=1;
            }
            else if(player->huace[i]==4){
                a4+=1;
            }
            else if(player->huace[i]==5){
                a5+=1;
            }
            else if(player->huace[i]==6){
                a6+=1;
            }
//        for(i=0;i<a;i++)
    }
//    fclose(fp);
}
