#include <iostream>
using namespace std;
class Student {
private:
    int age;
public:
    Student(int age){
        this->age = age;
    }
    friend ostream& operator<<(ostream& os,  Student& s);
};
ostream& operator<<(ostream& os,  Student& s) {
    os << "Age: " << s.age; 
    return os;
}

int main() {
    Student s1(20);
    Student s2(25);
    cout << s1 << endl; 
    cout << s2 << endl; 
    return 0;
}
