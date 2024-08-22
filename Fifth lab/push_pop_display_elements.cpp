// Define a class template stack that can hold element of any datatype . Implement function to push pop and display
// element from the stack using function template.
#include <iostream>
using namespace std;

template <class T>
class Stack {
public:
    T marks[7];
    int flag = -1;
        void push(int num){
            if(flag<6){
                flag++;
                marks[flag] = num;
                
            }else{
                cout<<"Stack is Full."<<endl;
            }
        }
    void pop() {
        if (flag < 0) {
            cout << "Stack is Empty" << endl;
        }else{
        flag--; 
    }
}
    void display()  {
        cout << "Stack elements: ";
        for (int i = 0; i <= flag; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> stack; 
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display(); 
    stack.pop();
    stack.display();
    return 0;
}
