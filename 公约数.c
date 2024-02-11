#include<stdio.h>
#include <string.h>

int gcd(int a,int b);
int gcm(int a,int b);
int yuefen(int fz,int fm);

int main(int argc, char const *argv[])
{
		int g = gcd(4,3);
		printf("%d\n",g);
		printf("%d\n",gcm(4,11));
		yuefen(2,5);

}

int gcd(int a, int b){
	return b? gcd(b, a%b):a;
}

int gcm(int a, int b){
	return a/gcd(a,b)*b;
}

int yuefen(int fz,int fm){
	int g_cd = gcd(fz,fm);
	
	fz /= g_cd;
	fm /= g_cd;
	printf("fz = %d fm = %d",fz,fm);
}	


x%5==1;



