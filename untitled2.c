#include <stdio.h>
#include <ctype.h>

char letter_to_number(char c) {
	switch (toupper(c)) {
		case 'A': case 'B': case 'C': return '2';
		case 'D': case 'E': case 'F': return '3';
		case 'G': case 'H': case 'I': return '4';
		case 'J': case 'K': case 'L': return '5';
		case 'M': case 'N': case 'O': return '6';
		case 'P': case 'Q': case 'R': case 'S': return '7';
		case 'T': case 'U': case 'V': return '8';
		case 'W': case 'X': case 'Y': case 'Z': return '9';
		default: return c;
	}
}

int main() {
	char phone_number[50];
	printf("Enter phone number: ");
	scanf("%s", phone_number);
	
	for (int i = 0; phone_number[i] != '\0'; i++) {
		phone_number[i] = letter_to_number(phone_number[i]);
	}
	
	printf("%s\n", phone_number);
	return 0;
}
