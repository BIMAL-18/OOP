#include <iostream>
using namespace std;
class Base {
public:
    Base(int x) {
        cout << "Base class constructor called with value: " << x << endl;
    }
};
class Derived : public Base {
public:
    Derived(int x, int y) : Base(x) {
        cout << "Derived class constructor called with value: " << y << endl;
    }
};

int main() {
    Derived obj(10, 20);

    return 0;
}
