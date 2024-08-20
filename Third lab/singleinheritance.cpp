#include<iostream>
using namespace std;
class Base {
protected:
    int num1, num2;
public:
    void getInput() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }
};
class Derived : public Base {
public:
    void displaySum() {
        int sum = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    Derived obj;
    obj.getInput();
    obj.displaySum();

    return 0;
}

