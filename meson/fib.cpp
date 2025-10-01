#include <iostream>

unsigned long long fib(int x) {
    if (x == 0)
        return 0ull;
    if (x == 1)
        return 1ull;
    return fib(x-1) + fib(x-2);
}

int main() {
    std::cout << fib(55);
}
