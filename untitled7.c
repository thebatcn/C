#include <stdio.h>

int find_largest(int a[], int n) {
	
	int *p = a,i =1;
	int largest = *p++;
	
	while (p++ < a + n) {
		i++;
		if (*p > largest) {
			largest = *p;
			
		}
	}
	return largest;
}

void find_two_largest(const int *a, int n, int *largest,
	int *second_largest)
{
	int *p = a;
//	int first,second ;
//	int f_s[2];
	
	*largest = *second_largest = *p;
	
	while(p++ < a + n){
		if(*p > *largest){
			*second_largest = *largest;
			*largest = *p;	
		}
		else if(*p > *second_largest)
				*second_largest = *p;
			
	}
}


int main(void){
	int b1[20]={1,2,3,4,15,6,17,18,9,10};
	int first,second;
	double ident[2][2] = {[0][0]=1.0,[1][1] = 1.0};
	double *ip = ident[0];
	
	while(ip < ident[1]){
		printf("%lf ",*ip++);
		//TODO
	}
	
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			printf("%1.0lf ",ident[i][j]);
//			//TODO
//		}
//		printf("\n");
//		//TODO
//	}
//	find_largest(b1,10);
//	
//	find_two_largest(b1,10,&first,&second);
//	
//	printf("first = %d  second = %d\n",first,second);
}
