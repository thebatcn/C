#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void){
	float temperature_readings[30][24];
	float day_aver_temper[30]={0.0f}, month_aver_temper =0.0f;
	srand(time(NULL));
	
	for(int i = 0;i<30;i++){
		for(int j =0;j<24;j++){
			
			temperature_readings[i][j] =(float)rand() / (float)(RAND_MAX / 101) ;
			day_aver_temper[i] += temperature_readings[i][j];
		}
		day_aver_temper[i] /= 24;
		month_aver_temper += day_aver_temper[i];
	}
	month_aver_temper /= 30;
	for(int i = 0;i<30;i++){
		for(int j=0;j<24;j++){
			printf("%-4.1f",temperature_readings[i][j]);
		}
		printf("\n\n");
		}
	
	for(int i =0;i<30;i++){
		if(i%5==0){
			printf("\n");
		}
		printf("day_vaer = %4.1f  ",day_aver_temper[i]);
	}
	
	
	printf("\nmonth_aver_temp = %4.1f\n",month_aver_temper);
	
	int nums = (int) sizeof(temperature_readings)/sizeof(temperature_readings[0][0]);
	printf("%d\n",nums);
}
	


