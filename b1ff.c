#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
	char s[50];
	char *s1;
	
	printf("You enter:");
	scanf("%[^\n]",s);
	printf("\n");
	s1 = strupr(s);
	for(int i=0;i<strlen(s1);i++){
		//TODO
		switch (s1[i]) {
		case 'A':
			//TODO
			s1[i]='4';
			break;
		case 'B':
			//TODO
			s1[i]='8';
			break;
		case 'E':
			s1[i]='3';
			break;
		case 'I':
			s1[i]='1';
			break;
		case 'O':
			s1[i]='0';
			break;
		case 'S':
			s1[i]='5';
			break;
		default:
			s1[i];
			break;
		}
			//TODO
		
		printf("%c",s1[i]);
	}
}
