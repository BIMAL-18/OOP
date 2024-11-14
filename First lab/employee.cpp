// Create a class called employee  with data members emp_id, name, salary and member function display details.
// initialize data members using parameterized constructor. Data members must be private.
#include <iostream>
using namespace std;

class Employee {
private:
    int emp_id;         
    string emp_name;    
    double emp_salary;  

public:
    
    Employee(int id, string name, double salary) {
        emp_id = id;
        emp_name = name;
        emp_salary = salary;
    }

   
    void displayDetails() {
        cout<<"Enployee Details :"<<endl;
        cout << "Employee ID = " << emp_id << endl;
        cout << "Employee Name = " << emp_name << endl;
        cout << "Employee Salary = " << emp_salary << endl;
    }
};

int main() {
   
    Employee emp1(18, "Bimal", 50000);

    
    emp1.displayDetails();

    return 0;
}
