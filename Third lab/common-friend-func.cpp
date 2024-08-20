
#include <iostream>
using namespace std;

class Class1; // Forward declaration

class Class2 {
private:
    int value;
public:
    Class2(int v) : value(v) {}
    void display() const {
        cout << "Class2 value: " << value << endl;
    }
    friend void swapValues(Class1 &c1, Class2 &c2);
};

class Class1 {
private:
    int value;
public:
    Class1(int v) : value(v) {}
    void display() const {
        cout << "Class1 value: " << value << endl;
    }
    friend void swapValues(Class1 &c1, Class2 &c2);
};

void swapValues(Class1 &c1, Class2 &c2) {
    int temp = c1.value;
    c1.value = c2.value;
    c2.value = temp;
}

int main() {
    Class1 obj1(10);
    Class2 obj2(20);

    cout << "Before swapping:" << endl;
    obj1.display();
    obj2.display();

    swapValues(obj1, obj2);

    cout << "After swapping:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}