#include<stdio.h>
#define num 100
int gcd(int m,int n);

int main(void){
	int x,y,result,t;
	
	printf("Enter two num: ");
	scanf("%d %d",&x,&y);
	result = gcd(x,y);
	printf("result = %d\n",result);
}

int gcd(int m,int n)
{
	int t,r;
	if (m < n){
		t = m;
		m = n;
		n = t;
	}
	if((r = m % n) ==0)
		return n;
	else
		return gcd(n,r);
}
