// 2. Create a class car with data members cc, speed, color and member function start, stop, accelerate

#include <iostream>
using namespace std;

class Car {
private:
    int speed;   
    int cc;      
    string color; 
public:
    Car(int initialSpeed, int initialCc, string initialColor) {
        speed = initialSpeed;
        cc = initialCc;
        color = initialColor;
    }

    void start() {
       
        cout<<"Car Started Successfully "<<endl;

    }

    void stop() {
            cout << "Car Stopped Sucessfully " << endl;
    }

    void accelerate() {
            cout << "Car Accelerated Successfully "  << endl;
    }
    void displaydetails(){
        cout<<"Details : "<<endl;
        cout<<"The Speed is = "<<speed<<" km/h"<<endl;
        cout<<"The CC is = "<<cc<<"cc"<<endl;
        cout<<"The Color is = "<<color<<endl;
        cout<<"  "<<endl;

    }
};

int main() {
    Car c(200, 2000, "White");
    c.displaydetails();
    c.start();
    c.accelerate();
    c.stop();

    return 0;
}
