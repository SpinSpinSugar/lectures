#include <stdio.h>
unsigned inc(unsigned n) {
	// Preproccessor magic 
    ++n;
	return n;	
}

int main() {
	printf("%d", inc(42));
	return 0;
}
