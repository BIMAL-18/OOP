#include <iostream>
using namespace std;

class ClassB; 
class ClassA {
private:
    int valueA;
public:
    ClassA(int a){
        valueA = a;
    }
    friend void exchangeValues(ClassA&, ClassB&);
    void display(){
        cout << "Value in ClassA: " << valueA << endl;
    }
};
class ClassB {
private:
    int valueB;

public:
    ClassB(int b){
        valueB = b;
    }
    friend void exchangeValues(ClassA&, ClassB&);

    void display() {
        cout << "Value in ClassB: " << valueB << endl;
    }
};
void exchangeValues(ClassA& a, ClassB& b) {
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);
    cout << "Before exchanging values:" << endl;
    objA.display();
    objB.display();
    exchangeValues(objA, objB);

    cout << "After exchanging values:" << endl;
    objA.display();
    objB.display();

    return 0;
}

