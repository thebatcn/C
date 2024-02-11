#include <stdio.h>
#include <math.h>

typedef unsigned long u_long ;
#define DISP(f,x) printf(#f"(%g) = %g\n",(x), (f(x)))

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
return x > y ? x : y;       \
}
#define STRINGIZE(x) #x
#define EXPAND_MACRO(x) STRINGIZE(x)
#define LINE_FILE ("Line " EXPAND_MACRO(__LINE__) " of file " __FILE__)
#define LING __LINE__
#define CHECK(x,y,n) (((x)>=0 && (x)<=(n)-1 && (y)>=0 && (y)<=(n)-1)?1:0)
#define MEDIAN(x,y,z)    (((x)>(y)?(x):(y))>(z)?((x)>(y)?(x):(y)):(z))

int main(void){
	putchar(DISP(sqrt,3.0));
	GENERIC_MAX(u_long);
	

	const int str = LING;
	printf("%d\n",str);
	printf("%d\n",CHECK(2,5,5));

}

#define POLYNOMIAL(X) 3*(X)

IDENT(foo) 
PRAGMA(ident #foo)
