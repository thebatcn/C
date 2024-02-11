#include<stdio.h>

int main(void){
	int array[5][5]={0},sum_row[5] = {0} ,sum_col[5] ={0};
	int num;
	
	for(int i=0;i<5;i++){
		printf("Enter row %d: ",i+1);
		for(int j=0;j<5;j++){
			scanf("%d",&num);
			array[i][j] = num;
			
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(int i=0;i<5;i++){
//		sum_row = 0;
//		sum_col= 0;
		for(int j=0;j<5;j++){
			sum_row[i] += array[i][j];
			sum_col[i] += array[j][i];		
		}
	}
	
	for(int i=0;i<5;i++){
		printf("%5d",sum_row[i]);	
	}
	printf("\n");
	for(int i=0;i<5;i++){
		printf("%5d",sum_col[i]);
	}
//	printf("%6d\n",sum_col);
}
