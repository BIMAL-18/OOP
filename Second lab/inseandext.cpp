#include <iostream>
using namespace std;
class Meters {
public:
    int meters;
    Meters(int m) {
        meters = m;
    }
    operator int()  {
        return meters;
    }
};
class Kilometers {
public:
    float kilometers;
    Kilometers(float km) {
        kilometers = km;
    }
    explicit operator Meters()  {
        return Meters(static_cast<int>(kilometers * 1000));
    }
};

int main() {
    Meters d1(1500);
    int distanceInMeters = d1;
    cout << "Distance in meters (implicit conversion): " << distanceInMeters << " meters" << endl;
    Kilometers k1(3);
    Meters d2 = static_cast<Meters>(k1);
    cout << "Distance in meters from kilometers (explicit conversion): " << d2.meters << " meters" << endl;
    return 0;
}
