#include <iostream>

unsigned inc(unsigned n) {
	// Preproccessor magic  
    ++n;
	return n;	
}

int main() {
    std::cout << inc(42);
	return 0;
}
