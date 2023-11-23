#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *pfile;
    int  i;
    char c;

    pfile = fopen("a1.c", "r");
	while ((c=fgetc(pfile)) != EOF)
    {
        printf("%c",c);
    }
    fclose(pfile);
    return 0;

}