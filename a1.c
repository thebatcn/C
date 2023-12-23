#include<stdio.h>

int main(void){
	int a,b,c,t;
	printf("input a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);

	if (a > b){
		t = b;
		b = a;
		a = t;
	}
	if (a > c){
		t = c;
		c = a;
		a =t;
	}
	if (b > c){
		t = c; 
		c =b ;
		b = t;
	}
	printf("the order number is :\n");
	printf("%d,%d,%d",a,b,c);

}