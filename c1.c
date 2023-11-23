#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a = 1;
    printf("请输入一个十进制数：");
	scanf("%d",&a);
	printf("十进制%d转化为十六进制%x",a,a);
	return 0;
}