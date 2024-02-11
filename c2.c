#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


int main(int argc, char const *argv[])
{
	char ch;
	char words[50];
	int i =0,n=0;

	

	while((ch=getchar())!= '\n'){
		i++;
		if(ch == ' '){
			n++;
		}
	}
	// scanf("%[^\n]",words);
	// printf("%s\n",words);

	printf("%d %d\n",i,n );

	printf("%.1f\n",(float)(i-n)/(n+1));
}


// void fuc1(void){
// 	static int i = 100;
// }