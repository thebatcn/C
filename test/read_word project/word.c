#include "word.h"
#include <stdio.h>

int read_ch(void){
	int ch;

	ch = getchar();
	if(ch == ' ' || ch == '\t')
		return ' ';
	return ch;
}

int read_word(char *word,int len){
	int pos=0,ch;

	while((ch=read_ch())==' ')
		;
	while(ch !=' ' && ch != EOF){
		if(pos < len)
			word[pos++] = ch;
		ch = read_ch();
	}
	word[pos] = '\0';
	return pos;
}

//int main(void){
//	char myword[WORDLEN+1];
//	
//	read_word(myword,WORDLEN);
//	printf("%s\n",myword);
//}
