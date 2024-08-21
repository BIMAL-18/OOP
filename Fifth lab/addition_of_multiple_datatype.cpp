// write a c++ program to demonstrate the addition of multiple datatype using function template.
#include <iostream>
#include <string>
using namespace std;
template<class T>
void addValues(T a, T b) {
    T result = a + b;
    cout << "Result: " << result << endl;
}

int main() {
    addValues(15, 16);
    addValues(14.5, 16.4);
    string str1 = "Bimal";
    string str2 = "Kunwar";
    addValues(str1, str2);

    return 0;
}
