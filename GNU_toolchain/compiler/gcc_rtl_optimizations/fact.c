#include <stdio.h>

int fact(int n) {
	if (n < 2) return n;
	return n * fact(n - 1);	
}

int main() {
	printf("%d\n", fact(10));
	return 0;
}
