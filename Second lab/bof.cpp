#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    Student(int age) {
        this->age = age;
    }
    friend Student operator+ (Student& s1, Student& s2);
    void display() const {
        cout << "Age = " << age << endl;
    }
};

Student operator+( Student& s1,  Student& s2) {
    int totalage = s1.age + s2.age;
    return Student(totalage);
}

int main() {
    Student s1(20);  
    Student s2(25); 
    Student s3 = s1 + s2;
    s3.display();
    return 0;
}
