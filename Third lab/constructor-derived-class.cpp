// A program to demonstrate the use of constructor in derived class
//

#include <iostream>

using namespace std;

class Animal {
public:
  string name;
  Animal (string name) {
    this -> name = name;
    cout << "Animal is called" << endl;
  }
};

class Dog: public Animal {
public: 
  Dog (string name): Animal(name) {
    cout << "Dog constructor is called" << endl;
  }
};

int main() {
  Dog d("puppy");
}