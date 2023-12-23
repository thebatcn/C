#include <stdio.h>

const float fn = 12.3;

int main(int argc, char const *argv[])
{
	double fn = 180.0;

	// extern float fn;
	int num = 10;
	printf("%d\n",num );
	printf("%f\n",fn);
	return 0;
}

void fuc1(void){
	static int i = 100;
}