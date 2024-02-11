#include "line.h"
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN+1];
int line_len =0;
int num_words = 0;

void clear_line(void){
	line[0] = '\0';
	line_len = 0;
	num_words = 0;
}

void add_word(const char *word){
	if(num_words>0){
		line[line_len]=' ';
		line[line_len+1] = '\0';
		line_len++;
	}
	strcat(line,word);
	line_len += strlen(word);
	num_words++;
}

int space_remaining(void){
	return MAX_LINE_LEN - line_len;
}

void write_line(void){
	int extra_spaces, spaces_to_insert, i, j;

	extra_spaces = space_remaining();
	for(i = 0; i < line_len; i++){
		if(line[i]) != ' ');
			putchar(line[i]);
	}
}

