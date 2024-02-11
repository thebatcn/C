#include <stdio.h>
#include <stdbool.h>

#define Maxlen 100


int read_line(char str[],int n);

int main(int argc, char const *argv[])
{
	/* code */
	int day;
	char reminds[Maxlen];
	char rem[day][Maxlen];

	char string[50];
//
//	printf("Enter day and reminder:");
//	int a = scanf("%2d",&day);
//	printf("%d",day);
//	read_line(string,40);
	for(int i=0;i<=10;i++){
			for(int j=0;j<=10;j++){
			//TODO
			printf("%s",*rem[i]);
		}
		//TODO
	}
	return 0;
}


int read_line(char str[],int n){
	int ch,i =0;

	while((ch = getchar())!= '\n'){
		if(i<n)
			str[i++] = ch;
	}
	str[i]	= '\0';
	return i;
}

