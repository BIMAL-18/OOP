// Demonstrate unary operator overloading using friend.     function 

#include <iostream>
using namespace std;
class Student {
private:
    int age;  
public:
    Student(int age){
        this->age = age;
    }
    friend Student& operator++(Student& s);
    void display() {
        cout << "Age = " << age << endl;
    }
};
Student& operator++(Student& s) {
    ++s.age;  
    return s;
}

int main() {
    Student s(30);
    ++s;  
    s.display(); 
    return 0;
}
