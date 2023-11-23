#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	FILE *pfile;
    int  i;
    char c;
    char *str = "abcdefghijklmnopqrstuvwxyz";
    printf("len(str) = %d\n",strlen(str));
    pfile = fopen("a1.c", "r");
	while (!feof(pfile))
    {
        printf("%c",fgetc(pfile));
    }
    fclose(pfile);
    return 0;

}