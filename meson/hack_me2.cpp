#include <iostream>
#define private public
#define class struct
class A1 {
    void fun() {
        std::cout << "A\n";
    }
};

struct A2 {
private:
    void fun() {
        std::cout << "A\n";
    }
};


int main() {
    A1 var1;
    var1.fun();

    A2 var2;
    var2.fun();
}
