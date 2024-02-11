#include <stdio.h>

void remove_filename(char *url) {
	
	char *p = url;
	while (*url) {
		if (*url == '/')
			p = url;
		url++;
	}
	*p = ' ';
}

int main(void)
{
//	char s[] = "Hsjodi", *p;
//	
//	for (p = s; *p; p++)
//		--*p;
//	puts(s);
	char num[10]="abcdefgh";
	char *p = num;
	char fname[]="http://www.knking.com/index.html";
	const int a[3]={1,2,3};
	int *b = a;
	for(int i=0;i<3;b++){
		++*b;
		i++;
	}
	
	for(int i=0;i<3;i++){
		//TODO
	printf("%d\t",a[i]);
	}
		
	
	for(;*p;p++){
		++*p;
	}
	printf("%s\n",num);
	
	remove_filename(fname);
	printf("%s\n","fname\nfa3da\0");
	return 0;
}

