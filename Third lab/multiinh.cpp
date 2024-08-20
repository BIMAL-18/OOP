#include <iostream>
using namespace std;
class Marks {
protected:
    float subject1, subject2, subject3;

public:
    void inputMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> subject1;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2;
        cout << "Enter marks for Subject 3: ";
        cin >> subject3;
    }
};
class TotalMarks : public Marks {
protected:
    float total;

public:
    void calculateTotal() {
        total = subject1 + subject2 + subject3;
    }
    float getTotal()  {
        return total;
    }
};
class Percentage : public TotalMarks {
public:
    void displayPercentage() {
        float percentage = (getTotal() / 300.0) * 100;
        cout << "Total Marks: " << getTotal() << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main() {
    Percentage student;
    student.inputMarks();
    student.calculateTotal();
    student.displayPercentage();

    return 0;
}
