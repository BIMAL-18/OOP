
#include <iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "Base1's show function." << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2's show function." << endl;
    }
};

class Derived : public Base1, public Base2 {
    // No override of show()
};

int main() {
    Derived obj;
    // obj.show(); // This line would cause ambiguity error

    // Ways to resolve ambiguity:
    obj.Base1::show(); // Call Base1's show()
    obj.Base2::show(); // Call Base2's show()

    return 0;
}
