// Write a C++ program to perform arithmetic operations on two numbers and throw an exception if the dividend is zero or does not 
// contain an operator
#include <iostream>
using namespace std;

int main() {
        double num1, num2;
        char op;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    for(int i = 0 ; i<2 ; i++){
    try {
        cout << "Enter an operator : ";
        cin >> op;
        if (op != '+' && op != '-' && op != '*' && op != '/') {
            throw runtime_error("Invalid operator.");
        }
        if (op == '/' && num2 == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        double result;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
        }
        cout << "The result is : " << result << endl;
    } catch (runtime_error e) {
       cout << "Exception : " << e.what() << endl;
    }
    }
    return 0;

}
