#include <stdio.h>

int baiqianbaiji(void){
	for(int i=0;i<20;i++)
		for(int j =0; j < 34;j++)
			for(int k =3; k < 100;k++)
				if(i+j+k==100&& 5*i+3*j+k/3==100&&k%3==0)
					printf("公鸡：%-4d 母鸡:%-4d 小鸡:%-4d\n",i,j,k);
				// if(5*i+3*j+k/3 == 100)
				// 	if(i+j+k==100)
				// 		if(k%3==0)
				// 			printf("公鸡：%-4d 母鸡:%-4d 小鸡:%-4d\n",i,j,k);

}

int main(int argc, char const *argv[])
{
	baiqianbaiji();
	return 0;
}