#include <iostream>
using namespace std;
class Student {
private:
    int age;
public:
    Student(int age){
        this->age = age;
    }
    Student operator+( Student& s)  {
       int totalage = age + s.age;
        return Student(totalage);
    }
    void display()  {
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1(20); 
    Student s2(25); 
    Student s3 = s1 + s2;
    s3.display();

    return 0;
}

