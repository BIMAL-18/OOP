#include <iostream>
using namespace std;

class Animal {
public:
    // virtual ~Animal() {}
    virtual void speak() const = 0; 
};

class Dog : public Animal {
public:
    void speak() const override {
        cout << "Dog is speaking." << endl;
    }
};

class Cat : public Animal {
public:
    void speak() const override {
        cout << "Cat is speaking." << endl;
    }
};

int main() {
    const int numAnimals = 4;
    Animal* animals[numAnimals];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();
    for (int i = 0; i < numAnimals; ++i) {
        animals[i]->speak();
    }
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }
    return 0;
}
