// Write an template overload function maximum() that find the maximum of two values.
// Implement version for both integer and character type
#include <iostream>
using namespace std;
template<class T>

T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 30;
    int y = 40;
    cout << "Maximum of " << x << " and " << y << " is = " << maximum(x, y) << endl;

    char c1 = 'v';
    char c2 = 'k';
    cout << "Maximum of '" << c1 << "' and '" << c2 << "' is ' = " << maximum(c1, c2) << endl;

    return 0;
}
