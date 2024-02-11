#include<stdio.h>
#include<stdbool.h>

int digit(int n,int k);

int main(void){
	int result;
	
	result = digit(102141,10);
	printf("%d\n",result);
}

int digit(int n, int k){
	int g[10]={0};
	int i=0;
	
	while(n>0){
		g[i] = n % 10;
		i++;
		n /= 10;
	}
	if(k>i+1){
		printf("超过了数字位数\n");
		//TODO
	}
	else
		return g[k-1];
	
}
