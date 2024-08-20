#include <iostream>
using namespace std;

class Meter {
private:
    double length;

public:
    Meter(double length) : length(length) {}

    operator double()  {
        return length;
    }

    void display() {
        cout << "Length: " << length << " meters" << endl;
    }
};

int main() {
    Meter m(45);
    m.display();
    double lMeters = m;
    cout << "Length in meters: " << lMeters << " meters" << endl;

    return 0;
}
