#include <stdio.h>

#define AVG(x,y) (x-y)/2    /* AVG(x,y) (((x)-(y))/2)*/
#define AREA(x,y) (x)*(y)	/* AREA(x,y) ((x)*(y)) */

#define N 10

void Pt(int b[],int n){
	int *p;
	// for(p=b;p<p+n;p++){
	// 	printf("%d\n",*p);
	// }
	for (int *i = b; i < b+n; i++)
	{
		printf("%d\n",*i );
		/* code */
	}
}

int find_largest(int *a,int n){
	int i,max;

	max = *a;
	for(i = 0; i < n; a++)
		if(*a > max)
			max = *a;
	return max;

}
int main(void){
	
	int b1[20]={1,2,3,4,5,6,7,8,9,10};	
	Pt(b1,5);

	printf("%d\n",find_largest(b1,10));
	return 0;
}

bool search(int a[7][24],int n,int key){
	int *p = a[0];

	while(p < a[0]+ n)
		if(*p == key)
			return True;
	return False;
}

double temperatures[7][24];

double *day_temperatures[24];

for(i = 0; i<7;i++){
	printf("%lf",find_largest(temperatures[i],24);
}


for (int *p = a [i]; p < a[i]+k; p++)
{
	printf("%d ",*p);
	/* code */
}