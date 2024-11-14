// Create class students with data members student name, roll and age.
// member functions getname, setname, getage, setage, getroll, setroll, display details.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string student_name;    
    int student_roll;      
    int student_age;       

public:
    
    void setName(string name) {
        student_name = name;
    }

    
    string getName() {
        return student_name;
    }

    
    void setAge(int age) {
        student_age = age;
    }

    
    int getAge() {
        return student_age;
    }

    
    void setRoll(int roll) {
        student_roll = roll;
    }

    
    int getRoll() {
        return student_roll;
    }

    
    void displayDetails() {
        cout<<"Sudent Details:"<<endl;
        cout << "Student Name = " << student_name << endl;
        cout << "Student Roll = " << student_roll << endl;
        cout << "Student Age = " << student_age << endl;
    }
};

int main() {
   
    Student s1;

  
    s1.setName("Bimal");
    s1.setRoll(7);
    s1.setAge(18);

    
    s1.displayDetails();

    return 0;
}
