#include <stdio.h>

int arr[1024];

int main() {
	for (int i = 0; i < 1024; ++i) {
		arr[i] = i;
	}
	printf("%d\n", arr[1024]);
	return 0;
}
