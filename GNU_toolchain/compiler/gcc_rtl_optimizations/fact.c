#include <stdio.h>

unsigned fact(unsigned n) {
	if (n < 2) return n;
	return n * fact(n - 1);	
}

int main() {
	printf("%u\n", fact(10));
	return 0;
}
