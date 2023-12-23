#include <stdio.h>

int gcd(int a, int b) {
	int min = a < b ? a : b;
	int i;
	
	for (i = 2; i <= min; i++) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
	
	return 1;
}

int main() {
	int a, b;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("The greatest common divisor of %d and %d is %d\n", a, b, gcd(a, b));
	
	return 0;
}

