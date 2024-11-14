// Demonstrate basic yo user define type conversion 

#include <iostream>
using namespace std;
class Meter {
private:
    double length;

public:
    Meter(double length){
        this->length = length;
    }
    void display() const {
        cout << "Length: " << length << " meters" << endl;
    }

   
    double toCentimeters()  {
        return length * 100;
    }
};

int main() {
    double lMeters = 15;
    Meter m(lMeters);
    m.display();
    cout << "Length in centimeters: " << m.toCentimeters() << " cm" << endl;

    return 0;
}

