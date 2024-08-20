#include <iostream>

using namespace std;

class Car {
public:
    string brand;
    Car(string brandName) {
        brand = brandName; // Corrected member variable assignment
    }
};

class Person {
public:
    string name;
    Car c; // This should be an instance of the Car class
    Person(string personName, Car car) : c(car) { // Use initializer list for Car object
        name = personName; // Corrected member variable assignment
    }

    void display() {
        cout << "Person's name: " << name << endl;
        cout << "Car brand: " << c.brand << endl; // Access the brand attribute of the Car object
    }
};

int main() {
    Car c("Toyota");
    Person p("Hari  ", c);
    p.display(); // Call the display method to show details
    return 0;
}