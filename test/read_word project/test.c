#include <stdio.h>
#include "word.h"


int main(void){
	char myword[21];

	read_word(myword,21);

	printf("%s\n",myword);
	getchar();
}
