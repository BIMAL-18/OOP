// Write a C++ program to accept user name and password and throw an exception if the password has less than
//  6 characters or does not contain a digit.
#include <iostream>
using namespace std;

int main() {
    for(int i=0;i<3;i++){
    string username;
    string password;
    cout << "Enter User Name: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    try {
        if (password.length() < 6) {
            throw runtime_error("Password must be at least 6 Characters Long...");
        }
        bool Digit = false;
        for (int i = 0 ; i<password.length() ; i++) {
            if (isdigit(password[i])) {
                Digit = true;
                break; 
            }
        }
        if (!Digit) {
            throw runtime_error("Password must have at least One Digit (0-9)");
        }
        cout << "Password is Correct." << endl;

    } catch (const runtime_error& e) {
       cout<<e.what() <<endl<<"Invalid password Format!!! "<< endl;
    }
    }

    return 0;
}
