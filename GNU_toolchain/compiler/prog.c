int f(int n) {
	if (n < 2) return n;
	return n * f(n - 1);	
     }

int main() {
	return f(4);
}
