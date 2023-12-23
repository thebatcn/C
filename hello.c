#include<stdio.h>
int main() {
	char c;
	int n = 0;
	do{
		//TODO
		printf("输入一个字符:");
		scanf("%c",&c);
		if (c>=65 && c <= 90)
			printf("字符%c是大写字母.\n",c);
		else if(c>=97 && c <= 122)
			printf("字符%c是小写字母.\n",c);
		else if(c>=48 && c<=57)
			printf("字符%c是数字.\n",c);
		else
			printf("字符%c是特殊字符.\n");
		n++;
	}while(n < 10);
	return 0;
}