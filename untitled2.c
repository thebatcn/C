#include<stdio.h>

int main(void) {
	for (int n = 100; n < 1000; n++) {
		int i = 0, temp = n, result = 0, a[10];
		
		while (temp > 0) {
			a[i++] = temp % 10;
			temp /= 10;
		}
		
		i--;
		
		while (i >= 0) {
			result += a[i] * a[i] * a[i];
			i--;
		}
		
		if (n == result)
			printf("%d\n", n);
	}
	
	return 0;
}

