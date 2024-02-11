#include <stdio.h>
#include <stdbool.h>

int f(char *s, char *t);
bool test_extension(const char *file_name,
	const char *extension);

int main(void){
	printf("%d\n",test_extension("mypython.py","PY"));
}


int f(char *s, char *t)
{
	char *p1, *p2;
	
	for (p1 = s; *p1; p1++)  {
		for (p2 = t; *p2; p2++)
			if (*p1 == *p2)  break;
		if (*p2 == '\0')  break;
	}
	return p1 - s;
}


bool test_extension(const char *file_name, const char *extension) {
	
	while (*file_name++ != '.')
		;
	while (*file_name && *extension)
		if (toupper(*file_name++) != toupper(*extension++))
			return false;
	return true;
}


