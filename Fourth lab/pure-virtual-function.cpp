#include <iostream>
class Vehicle {
public:
    virtual ~Vehicle() {}  
    virtual void start() const = 0; 
};
class Car : public Vehicle {
public:
    void start()  {
        std::cout << "Car is starting ." << std::endl;
    }
};
class Motorcycle : public Vehicle {
public:
    void start()   {
        std::cout << "Motorcycle is starting ." << std::endl;
    }
};

int main() {
    Car myCar;
    Motorcycle myMotorcycle;
    myCar.start();
    myMotorcycle.start();

    return 0;
}
