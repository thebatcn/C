#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>


int sub(int n){
	if (n==1){
		static int i = 0;
		do{
			i++;
		}while(i%5!=0);
		return(i+1);
	}
	else
	{
		int t;
		do{
			t =sub(n-1);
		}while(t%4!=0);
		return (t/4*5+1);
	}
}

int main(void){
	int total;
	total = sub(5);
	int c;
	printf("The total number of fish si %d\n",total);
	scanf("%c",&c);
	printf("%d\n",isdigit(c));
	printf("%F\n",pow(4,8));
	return 0;	
}


