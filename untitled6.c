int find_largest(int *a,int n){
	int *i,max;
	
	max = *a;
	for(i = a; i < a+n;i++ )
		if(*i > max)
			max = *i;
	return max;
	
}
int main(void){
	
	int b1[20]={1,2,3,4,50,6,7,8,9,10};	
	
	printf("%d\n",find_largest(b1,10));
	return 0;
}
