unsigned fact(unsigned n) {
	if (n < 2) return n;
	return n * fact(n - 1);	
}

