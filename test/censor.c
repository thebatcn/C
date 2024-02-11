#include <stdio.h>
#include <string.h>

void censor(char *s);
int mystrcmp(const char *s1,const char *s2);
void get_extension(const char *file_name, char *extension);
void build_index_url(const char *domain, char *index_url);



char *duplicate(const char *p,char *q)
{
//	char *q;
	
	strcpy(q, p);
	return q;
}


int main(void){
//	char s[30] = "i a food fo";
//	char *p;
//	censor(s);
//	p =duplicate(s,p);
//	printf("%s\n",p);
//	printf("%d\n",mystrcmp("ac11","ac11"));
	
	char *filename = "mytext", index[100]="";
//	get_extension(filename,ext);
	build_index_url(filename,index);
	printf("%s\n",index);
}

int mystrcmp(const char *s1,const char *s2){
	while(*s1 == *s2){
		//TODO
		if(*s1 == '\0'){
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
		
}
void censor(char *s){
	int i = 0;
	
	while(s[i+2] != '\0'){
		if(s[i]=='f'&& s[i+1] == 'o' && s[i+2] == 'o')
			s[i] = s[i+1] = s[i+2] = 'x';
		i++;
	}
	
}
void get_extension(const char *file_name, char *extension){
//	while(*file_name){
//		if(*file_name++ == '.'){
//			strcpy(extension,file_name);
//			return;
//		}
//	}
//	strcpy(extension,"");
	int len = strlen(file_name);
	char *p;
	
	for(len=strlen(file_name);len>0;len--)
		if(file_name[len]=='.')
			break;	
	p = &file_name[len];
	strcpy(extension,p+1);	
}

void build_index_url(const char *domain, char *index_url){
	char *a = "http://www.", *b = "/index.html";
	
	
	strcpy(index_url,a);
	strcat(index_url,domain);
	strcat(index_url,b);
	
}
