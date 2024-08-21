// Write a function template called swapValues() that swap the values of two variables of any data type. Demonstrate swapValues() 
// on both integer and string data types. 
#include <iostream>
#include <string>
using namespace std;
template<class T>
void swapvalue(T *a, T *b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 10;
    int b = 20;
    cout << "Before swap:"<<endl <<"a = " << a<<endl << ", b = " << b << endl;
    swapvalue(&a, &b);
    cout << "After swap:"<<endl<<" a = " << a <<endl<< ", b = " << b << endl;
    string First_Name = "Bimal";
    string Last_Name = "Kunwar";
    cout << "Before swap :"<<endl<< "First_Name = " << First_Name <<endl<< "Last_Name = " << Last_Name << endl;
    swapvalue(&First_Name, &Last_Name);
    cout << "After swap:"<<endl<< "First_Name = " << First_Name <<endl<< "Last_Name = " << Last_Name << endl;

    return 0;
}
