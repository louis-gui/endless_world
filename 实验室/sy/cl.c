#include<stdio.h>
main(){
    srand((unsigned)time(0));
    int i,j;
    char c;
    long long b;
    long long a;
    for(i=1;;i++){
        for(j=0;j<i;j++){
	    b=rand()%128+128;
	    c=b;
            printf("%c",c);
        }
    }
}
