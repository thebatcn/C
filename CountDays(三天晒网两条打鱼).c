#include <stdio.h>

struct DATE{
	int year;
	int month;
	int day;
};

int runyear(int year);
int countDays(struct DATE theDate);
void shai_dayu(int days);


int main(int argc, char const *argv[])
{
	struct DATE myDate = {.year = 1990,.month = 1,.day = 10};
	int resultyun_year = 0;
	int totaldays;

	resultyun_year = runyear(myDate.year);
	printf("%d\n",resultyun_year);
	totaldays = countDays(myDate);
	printf("%d\n",totaldays);
	
	shai_dayu(totaldays);
	return 0;
}

int runyear(int year){
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int countDays(struct DATE theDate){
	int perMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int year = 1990,totalDays=0;
	
	while(year < theDate.year){
		if(runyear(year))
			totalDays += 366;
		else
			totalDays += 365;
		year++;
	}
	if (runyear(theDate.year))
		perMonth[2] += 1;
	for(int i=1;i<theDate.month;i++){
		totalDays += perMonth[i];
	}
	return totalDays += theDate.day;
}

void shai_dayu(int days){
	switch (days%5) {
	case 1:
	case 2:
	case 3:
		printf("今天晒网\n");
		break;
	default:
		printf("今天打鱼\n");
		break;
	}
}
