#include <stdio.h>


int main(void) {

	int a, b, c, d, e, f, g, h;
	printf("a , b = ");
	scanf("%d,%d", &a, &b);

	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	g = a % b;
	h = a /= b; // ==f

	printf("a + b = %d\n"
		     "a - b = %d\n"
	       "a * b = %d\n"
		     "a / b = %d\n"
		     "a % b = %d\n"
		     "a /= b = %d\n"
	      	, c, d, e, f, g, h);

}
