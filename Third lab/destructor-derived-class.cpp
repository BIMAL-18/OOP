#include <iostream>

using namespace std;

class Animal {
public:
  ~Animal() {
    cout << "Animal destructor is called." << endl;
  }
};

class Dog: public Animal {
public: 
  ~Dog () {
    cout << "Dog destructor is called." << endl;
  }
};

int main() {
  Dog d;
  return 0;
}