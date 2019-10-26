#include<stdio.h>

main(){
	int x=1624342341;
	printf("1\n");
	printf("2\n");
	printf("3\n");
	int max = 0x7fffffff, min = 0x80000000;//int的最大值最小值
	printf("4 %d\n", min);
	long rs = 0;//用long类型判断溢出
	printf("5\n");
	for(;x;rs = rs*10+x%10,x/=10);//逆序，正负通吃，不用单独考虑负值
	printf("6\n");
	// int ret = rs>max||rs<min?0:rs;//超了最大值低于最小值就返回0
	int ret;
	if(rs>max||rs<min) {
		ret = 0;
	} else {
		ret = rs;
	}
	printf("7\n");
	printf("ret=%d\n", ret);
	printf("8\n");
	return ret;
}
