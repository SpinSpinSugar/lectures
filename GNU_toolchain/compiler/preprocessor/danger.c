#include <stdio.h>
int inc(unsigned n) {
// Preproccessor magic \
    ++n;
    return n;	
}

int main() {
	printf("%d\n", inc(42));
	return 0;
}
