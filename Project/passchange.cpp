#include <iostream>
using namespace std;

void details() {
    string name = "Bimal Kunwar";
    string age = "18";
    float money = 150457.45;
    cout << "Details :" << endl;
    cout << "Name is : " << name << endl;
    cout << "Age is : " << age << endl;
    cout << "Balance is : " << money << endl;
}

int main() {
    string email, user, newpass;
    int action = 0;
    string useremail = "bimal", username = "knwr";
    int code = 123;

    cout << "Enter your email Id : " << endl;
    cin >> email;
    cout << "Enter your username : " << endl;
    cin >> user;
    cout << "Enter 1 for login and 2 for change password: " << endl;
    cin >> action;

    switch (action) {
        case 1: {
            if (email == useremail && user == username) {
                details();
            } else {
                cout << "Invalid email or username. Try again." << endl;
                
                cout << "Enter 1 for login and 2 for change password: " << endl;
                cin >> action;

                switch (action) {
                    case 1: 
                        if (email == useremail && user == username) {
                            details();
                        } else {
                            cout << "Invalid email or username. Login failed." << endl;
                        }
                        break;

                    case 2: { 
                        cout << "Code sent to your email id :" << endl;
                        cout << "Your code is : " << code << endl;

                        int enteredCode;
                        cout << "Enter the code : ";
                        cin >> enteredCode;
                        
                        if (enteredCode == code) {
                            cout << "Enter your new password : ";
                            cin >> newpass;
                            username = newpass;
                            cout << "Password has been changed successfully." << endl;
                            cout << "Enter your email Id : " << endl;
                            cin >> email;
                            cout << "Enter your username : " << endl;
                            cin >> user;

                            if (email == useremail && user == username) {
                                details();
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
            }
            break;
        }

        case 2: { 
            cout << "Code sent to your email id :" << endl;
            cout << "Your code is : " << code << endl;

            int enteredCode;
            cout << "Enter the code : ";
            cin >> enteredCode;
            
            if (enteredCode == code) {
                cout << "Enter your new password : ";
                cin >> newpass;

                username = newpass;
                cout << "Password has been changed successfully." << endl;

                cout << "Enter your email Id : " << endl;
                cin >> email;
                cout << "Enter your username : " << endl;
                cin >> user;

                if (email == useremail && user == username) {
                    details();
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

































// #include <iostream>
// using namespace std;

// void details() {
//     string name = "Bimal Kunwar";
//     string age = "18";
//     float money = 150457.45;
//     cout << "Details :" << endl;
//     cout << "Name is : " << name << endl;
//     cout << "Age is : " << age << endl;
//     cout << "Balance is : " << money << endl;
// }

// int main() {
//     string email, user, newpass;
//     int action = 0;
//     string useremail = "bimal", username = "knwr";
//     int code = 123;

//     cout << "Enter your email Id : " << endl;
//     cin >> email;
//     cout << "Enter your username : " << endl;
//     cin >> user;
    
//     cout << "Enter 1 for login and 2 for change password: " << endl;
//     cin >> action;

//     switch (action) {
//         case 1: {
//             if (email == useremail && user == username) {
//                 details();
//             } else {
//                 cout << "Invalid email or username. Try again." << endl;
//             }
//             break;
//         }

//         case 2: { 
//             cout << "Code sent to your email id :" << endl;
//             cout << "Your code is : " << code << endl;

//             int enteredCode;
//             cout << "Enter the code : ";
//             cin >> enteredCode;
            
//             if (enteredCode == code) {
//                 cout << "Enter your new password : ";
//                 cin >> newpass;
//                 username = newpass;
//                 cout << "Password has been changed successfully." << endl;
//                 cout << "Enter your email Id : " << endl;
//                 cin >> email;
//                 cout << "Enter your username : " << endl;
//                 cin >> user;

//                 if (email == useremail && user == username) {
//                     details();
//                 } else {
//                     cout << "Invalid email or username. Try again." << endl;
//                 }
//             } else {
//                 cout << "Invalid code. Try again." << endl;
//             }
//             break;
//         }

//         default:
//             cout << "Invalid option. Please enter 1 or 2." << endl;
//             break;
//     }

//     return 0;
// }
