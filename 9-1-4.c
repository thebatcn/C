#include<stdio.h>
#include<stdbool.h>

int day_of_year(int month,int day,int year);

int main(void){
	int month,day,year,sum_days = 0;
	bool is_rnian;
	
	int sum_pday = 0,sum_rday=0;
	int days[2][13] ={{0,31,28,31,30,31,30,31,31,30,31,30,31},
					  {0,31,29,31,30,31,30,31,31,30,31,30,31}
				     };
	
//	for(int i = 0;i <
//		13;i++){	
//		sum_pday += days[0][i];
//		sum_rday += days[1][i];
//	}
	printf("输入月、日、年去计算是这一年的第多少天。\n");
	printf("格式：00 00 0000\n");
	do{
		printf("输入日期\n");
		scanf("%2d%2d%4d",&month,&day,&year);
		if((year % 4 ==0 && year % 100 != 0) || (year % 400 ==0))
			is_rnian = 1;
		else
			is_rnian = 0;
	}while(!(month >= 1 && month <= 12 && day >=1 && day <=days[is_rnian][month]));
	
	printf("month = %2d day =%2d year =%4d\n",month,day,year);
	
	
	
//	printf("平年总天数：%d\n",sum_pday);
//	printf("闰年总天数：%d\n",sum_rday);
	for(int i=1;i<= month;i++){
		sum_days += days[is_rnian][i-1];
	}
	sum_days += day;
	printf("这个人日期是这一年的第 %3d天",sum_days);
	
	
}

int day_of_year(int m,int d,int y){
	
}
