#include <stdio.h>
#include <string.h>

#define STRLEN 100
#define NUM	   10

void read_line(char *str,int n);

int main(void){
	char strings[NUM][STRLEN+1],s[STRLEN+1];
	int i=0,j,num_recode =0;
	read_line(s,STRLEN);
//	num_recode++;
//	strcpy(strings[num_recode],s);
	while(*s != '\0'){
		printf("Continue.\n");
//		if(i < NUM){
//			strcpy(strings[i],s);
//			
//		}
//		else
//			break;
//		i++;
		
		
		
	
//	for(int j=0;j<i;j++){
//		printf("%s\n",strings[j]);
//	}
	for(i=0;i<num_recode;i++){
		if(strcmp(s,strings[i])<0)
			break;
	}
	for(j=num_recode;j>i;j--){
		strcpy(strings[j],strings[j-1]);
	}	
	strcpy(strings[i],s);
	read_line(s,STRLEN);
	num_recode++;
	}
}

void read_line(char *str,int n){
	char ch;
	int i = 0;
	
	while((ch=getchar())!='\n' && i < n){
		str[i] = ch;
		i++;
	}
	str[i] ='\0';
}
