	#include <stdio.h>
	
	void test(void);
	
	int main(void){
		test();
		return 0;
	}
	
	void test(void){
		char c;
		int n = 0;
		
		while(1){
			printf("%d\n",n++);
			scanf(" %c",&c);    // " %c"
			if(c != 'Y' && c != 'y')
				break;
			
		}
	}
