//Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.
#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 2; i++) { 
        try {
            string email;
            cout << "Enter Email Id : ";
            cin >> email;

            if (email.find('@') == string::npos || email.find('.') == string::npos) { 
                throw runtime_error("Invalid Email Id!!!");
            } 

            cout << "Email Id is Valid." << endl;
        } catch (runtime_error e) {
            cout <<"Exception Caught...."<<endl<< e.what() << endl;
        }
    }

    return 0;
}
