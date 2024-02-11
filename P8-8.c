#include<stdio.h>

int main(void){
	int scores[5][5]={0},sum_people[5] = {0} ,sum_subject[5] ={0};
	int ave_people, ave_subject,high_score[5]={0},low_score[5]={0};
	
	for(int i=0;i<5;i++){
		printf("Enter people %d score: ",i+1);
		for(int j=0;j<5;j++){
			scanf("%d",&scores[i][j]);
			
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(int i=0;i<5;i++){
//		sum_people = 0;
//		sum_subject= 0;
		for(int j=0;j<5;j++){
			sum_people[i] += scores[i][j];
			sum_subject[i] += scores[j][i];		
		}
	}
	
	for(int i=0;i<5;i++){
		printf("%5d",sum_people[i]);	
	}
	printf("\n");
	for(int i=0;i<5;i++){
		printf("%5d",sum_subject[i]);
	}
//	printf("%6d\n",sum_subject);
}
