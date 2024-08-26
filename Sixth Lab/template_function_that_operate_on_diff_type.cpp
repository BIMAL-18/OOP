// Write a template function that operates on different types. Use exception handling within the 
// template function to handle exceptions specific to each data typ

#include <iostream>
using namespace std;
template <class T>
T Divide(T num1, T num2) {
    try {
        if (num2 == 0) {
            throw runtime_error("Number cannot be divisible by zero!");
        }
        return num1 / num2;
    } catch (runtime_error e) {
        cout << "Exception : " << e.what() << endl;
        return 0;
    }
}
int main() {
    int result1 = Divide(10, 2);
    cout << "Division of integer is : " << result1 << endl; 

    int result2 = Divide(10, 0); 
    // cout << "Division of integer is : " << result2 << endl;

    double result3 = Divide(10.5, 2.5);
    cout << "Division of float datatype is : " << result3 << endl;

    return 0;
}