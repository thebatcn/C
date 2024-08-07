#include <stdio.h>

int leap(int year){
	// 判断闰年
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int number(int year,int month,int day){
	int sum = 0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};

	if (leap(year) ==1){
		for(int i=0;i < month-1;i++)
			sum += b[i];
	}
	else{
		for(int i = 0;i<month-1;i++)
			sum += a[i];
	}
	sum += day;
	return sum;
}



int main(int argc, char const *argv[])
{
	int y,m,d,n;

	printf("输入year - month- day\n");
	// scanf("%d%d%d",&y,&m,&d);
	printf("%d",leap(2400));/**/
	n = number(2020,2,18);
	printf("This is %d days in the year.\n",n);
	return 0;
}