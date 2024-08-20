#include <iostream>
using namespace std;
class Student {
private:
    int age;
public:
    Student(int age = 0){
        this->age = age;
    }
    friend istream& operator>>(istream& is, Student& s);
    void display() {
        cout << "Age: " << age << endl;
    }
};
istream& operator>>(istream& is, Student& s) {
    is >> s.age;
    return is;
}
int main() {
    Student s1;
    cout << "Enter age of the student: ";
    cin >> s1;
    s1.display();
    return 0;
}
