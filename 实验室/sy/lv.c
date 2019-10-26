#include<stdio.h>
main(){
    char a,b;
    int i,j;
    for(a=-128;a<0;a++){
        for(b=-128;b<0;b++){
            printf("%c%c ",a,b);
        }
    }
    printf("\n");
}