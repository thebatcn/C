#include<stdio.h>
#include<math.h>

int num_digits(int n);

int main(void){
	int n,num;
	
	printf("输入一个数字: ");
	scanf("%d",&num);
	n = num_digits(num);
	printf("这个是数字是%d位数.\n",n);
	
}

int num_digits(int n){
	int i =0;
	while(fabs(n)>0){
		n /= 10;
		i++;
	}
	return i;
}
