#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void input_personal_details() {
    string name, email, phone, course, startDate, preferredTime, reason, payment, signature, date;

    cout << "_______________________________________________________________" << endl;
    cout << "|                 Course Registration Form                     |" << endl;
    cout << "|--------------------------------------------------------------|" << endl;

    ofstream out("student.txt", ios::out);
    if (!out.is_open()) {
        cout << "Error opening file for writing." << endl;
        return;
    }

    cout << "  Enter your name : ";
    getline(cin.ignore(), name); 

    cout << "  Enter your email : ";
    getline(cin, email);

    cout << "  Enter your phone number : ";
    getline(cin, phone);

    cout << "  Enter the course name : ";
    getline(cin, course);

    cout << "  Enter the course start date : ";
    getline(cin, startDate);

    cout << "  Enter your preferred time : ";
    getline(cin, preferredTime);

    cout << "  Enter the reason for enrolling : ";
    getline(cin, reason);

    cout << "  Enter your payment method : ";
    getline(cin, payment);

    cout << "  Enter your signature : ";
    getline(cin, signature);

    cout << "  Enter the date : ";
    getline(cin, date);

    cout << "|_____________________________________________________________|" << endl;

    out << "Course Registration Form" << endl;
    out << "Name    : " << name << endl;
    out << "Email   : " << email << endl;
    out << "Phone   : " << phone << endl;
    out << "Course  : " << course << endl;
    out << "Start Date  : " << startDate << endl;
    out << "Preferred Time  : " << preferredTime << endl;
    out << "Reason for Enrolling  : " << reason << endl;
    out << "Payment : " << payment << endl;
    out << "Signature  : " << signature << endl;
    out << "Date    : " << date << endl;

    out.close();
    cout << "              'Registration complete successfully'" << endl;
}

void display_personal() {
    ifstream in("student.txt", ios::in);
    if (!in.is_open()) {
        cout << "Error opening file for reading." << endl;
        return;
    }

    string line;
    cout << "                  'WELCOME TO BIMAL SERVER'                 " << endl << endl;
    cout << " -------------------------------------------------------------" << endl;
    cout << "|                      | PERSONAL DETAILS |                   |" << endl;
    cout << "|-------------------------------------------------------------|" << endl;
    cout << "|                                                             |" << endl;

    while (getline(in, line)) {
        cout << "  " << line << endl;
    }

    cout << "|_____________________________________________________________|" << endl;
    in.close();
}

void wifilogin() {
    const string correctPassword = "knwr";
    string username, password;

    cout << " ----------------------------------------------------" << endl;
    cout << "|                Wifi Login                          |" << endl;
    cout << "-----------------------------------------------------" << endl;

    while (true) {
        cout << "              Wifi Name : ";
        cin >> username;
        cout << "              Password : ";
        cin >> password;

        if (correctPassword == password) {
            cout << endl;
            cout << "          'Wifi connected successfully.'           " << endl;
            break;
        } else {
            cout << endl;
            cout << "     'Incorrect Password Please Try again...'" << endl << endl;
        }
    }
}

void gmailinterface() {
    const int code = 123;

    cout << "                   'WELCOME TO GMAIL'                           " << endl;
    cout << " -------------------------------------------------------------" << endl;
    cout << "|                       _____________                         |" << endl;
    cout << "|                      |   GMAIL     |                        |" << endl;
    cout << "|-------------------------------------------------------------|" << endl;
    cout << "|                                                             |" << endl;
    cout << "|                  Verify your email address :                |" << endl;
    cout << "|                  Your code is : " << code << "                         |" << endl;
    cout << "|                                                             |" << endl;
    cout << "|                                                             |" << endl;
    cout << "|                                                             |" << endl;
    cout << "|                ←          Reply        →                    |" << endl;
    cout << "---------------------------------------------------------------" << endl;
}

void create_and_login() {
    string email, password, name, useremail, userpassword;
    int choice;

    do {
        cout << "Enter Your Choice ;" << endl << "1. Create Account" << endl << "2. Login" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "                  'WELCOME TO BIMAL SERVER'                 " << endl << endl;
                cout << " -------------------------------------------------------------" << endl;
                cout << "|                      | CREATE ACCOUNT |                        |" << endl;
                cout << "|-------------------------------------------------------------|" << endl;
                cout << "|                                                             |" << endl;
                cout << "                    Name   :- ";
                cin.ignore(); 
                getline(cin, name);
                cout << "                    Email  :- ";
                cin >> email;
                cout << "                    Password :- ";
                cin >> password;
                cout << "|                                                             |" << endl;
                cout << "_______________________________________________________________" << endl << endl;
                cout << "              'Account Created Successfully'           " << endl << endl;
                break;

            case 2:
                cout << "                  'WELCOME TO BIMAL SERVER'                 " << endl;
                cout << " -------------------------------------------------------------" << endl;
                cout << "|                      |   LOGIN     |                        |" << endl;
                cout << "|-------------------------------------------------------------|" << endl;
                cout << "                    Email    :- ";
                cin >> useremail;
                cout << "                    Password :- ";
                cin >> userpassword;
                cout << "|                                                             |" << endl;
                cout << "_______________________________________________________________" << endl << endl;

                if (email == useremail && password == userpassword) {
                    cout << "              'Login Successfully..................'     " << endl;
                    input_personal_details();
                    string viewDetails;
                    cout << "Do you want to check your details :" << endl << "1. Yes" << endl << "2. No" << endl;
                    cin >> viewDetails;
                    if (viewDetails == "1") {
                        display_personal();
                    }
                } else {
                    cout << "              'Incorrect email or password. Please try again.'     " << endl;
                }
                break;

            default:
                cout << "Invalid choice. Please enter 1 or 2." << endl;
                break;
        }
    } while (choice != 2);
}

int main() {
    int choice;
    wifilogin();

    do {
        cout << "_______________________________________________________________" << endl;
        cout << "|                     Enter a Choice                           |" << endl;
        cout << "|--------------------------------------------------------------|" << endl;
        cout << "|                     1. Register                              |" << endl;
        cout << "|                     2. Gmail                                 |" << endl;
        cout << "|                     3. Exit                                  |" << endl;
        cout << "|______________________________________________________________|" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                create_and_login();
                break;
            case 2:
                int openGmail;
                cout << "Do you want to open Gmail?" << endl << "1. Yes" << endl << "2. No" << endl;
                cin >> openGmail;
                if (openGmail == 1) {
                    gmailinterface();
                }
                break;
            case 3:
                cout << "_________________Thank YOU_____________________________" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
