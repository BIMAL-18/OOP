#include <iostream>
using namespace std;

// Function to display user details
void displayDetails() {
    string name = "Bimal Kunwar";
    string age = "18";
    float balance = 150457.45;
    cout << "Details :" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Balance: $" << balance << endl;
}

int main() {
    string email, username, newPassword;
    int action = 0;
    string correctEmail = "bimal@gmail.com"; // Updated email format for realism
    string currentUsername = "knwr";
     int code = 123;
    cout << "__________________________________________" << endl;
    cout << "--------------Register--------------------" << endl;
    cout << "__________________________________________" << endl;
    cout << "Enter your email Id: ";
    cin >> email;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter 1 for login and 2 for change password: ";
    cin >> action;

    switch (action) {
        case 1: {
            if (email == correctEmail && username == currentUsername) {
                displayDetails();
            } else {
                cout << "Invalid email or username. Try again." << endl;
            }
            break;
        }

        case 2: {
            cout << "A code has been sent to your email id." << endl;
            cout << "Your code is: " << code << endl;
            
            // Display formatted message for code verification
            cout << endl;
            cout << "                   'WELCOME TO GMAIL'                           " << endl;
            cout << " -------------------------------------------------------------" << endl;
            cout << "|                       _____________                         |" << endl;
            cout << "|                      |   GMAIL     |                        |" << endl;
            cout << "|-------------------------------------------------------------|" << endl;
            cout << "|                                                             |" << endl;
            cout << "|                  Verify your email address:                |" << endl;
            cout << "|                  Your code is: " << code << "                          |" << endl;
            cout << "|                                                             |" << endl;
            cout << "|                                                             |" << endl;
            cout << " -------------------------------------------------------------" << endl;

            int enteredCode;
            cout << "Enter the code: ";
            cin >> enteredCode;

            if (enteredCode == code) {
                cout << "Enter your new password: ";
                cin >> newPassword;

                currentUsername = newPassword;
                cout << "Password has been changed successfully." << endl;

                cout << "Enter your email Id: ";
                cin >> email;
                cout << "Enter your username: ";
                cin >> username;

                if (email == correctEmail && username == currentUsername) {
                    displayDetails();
                } else {
                    cout << "Invalid email or username. Login failed." << endl;
                }
            } else {
                cout << "Invalid code. Try again." << endl;
            }
            break;
        }

        default:
            cout << "Invalid option. Please enter 1 or 2." << endl;
            break;
    }

    return 0;
}
