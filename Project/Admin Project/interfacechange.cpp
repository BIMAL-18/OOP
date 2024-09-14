#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

void displayCourses() {
    cout << "-------------------------------" << endl;
    cout <<"|      Available Courses        |" << endl;
    cout << "-------------------------------" << endl;
    cout << " 1. C++ Programming" << endl;
    cout << " 2. Data Structures" << endl;
    cout << " 3. Algorithms" << endl;
    cout << " 4. Web Development" << endl;
    cout << " 5. Machine Learning" << endl;
    cout << "-------------------------------" << endl;
}

void showCPlusPlusContent() {
    cout << "============================" << endl;
    cout << "| Course: C++ Programming  |" << endl;
    cout << "============================" << endl;
    cout << " 1. Introduction to C++" << endl;
    cout << " 2. Basic Syntax" << endl;
    cout << " 3. Object-Oriented Programming" << endl;
    cout << " 4. Advanced C++ Features" << endl;
    cout << " 5. C++ Standard Library" << endl;
    cout << "============================" << endl;
}

void showDataStructuresContent() {
    cout << "============================" << endl;
    cout << "| Course: Data Structures  |" << endl;
    cout << "============================" << endl;
    cout << " 1. Arrays and Linked Lists" << endl;
    cout << " 2. Stacks and Queues" << endl;
    cout << " 3. Trees and Graphs" << endl;
    cout << " 4. Hashing Techniques" << endl;
    cout << " 5. Advanced Data Structures" << endl;
    cout << "============================" << endl;
}

void showAlgorithmContent() {
    cout << "============================" << endl;
    cout << "| Course: Algorithms       |" << endl;
    cout << "============================" << endl;
    cout << "------------------------" << endl;
    cout << "1. Introduction to Algorithms" << endl;
    cout << "2. Sorting Algorithms" << endl;
    cout << "3. Searching Algorithms" << endl;
    cout << "4. Graph Algorithms" << endl;
    cout << "5. Dynamic Programming" << endl;
    cout << "============================" << endl; 
    cout << "============================" << endl; 
}

void showWebDevelopmentContent() {
    cout << "============================" << endl; 
    cout << "| Course: Web Development  |" << endl;
    cout << "============================" << endl; 
    cout << " 1. HTML and CSS" << endl;
    cout << " 2. JavaScript Basics" << endl;
    cout << " 3. Front-end Frameworks" << endl;
    cout << " 4. Back-end Development" << endl;
    cout << " 5. Full-Stack Projects" << endl;
    cout << "============================" << endl; 
}

void showMachineLearningContent() {
    cout << "=========================================" << endl; 
    cout << "|       Course: Machine Learning        |" << endl;
    cout << "=========================================" << endl; 
    cout << " 1. Introduction to Machine Learning" << endl;
    cout << " 2. Supervised Learning Techniques" << endl;
    cout << " 3. Unsupervised Learning Techniques" << endl;
    cout << " 4. Neural Networks and Deep Learning" << endl;
    cout << " 5. Model Evaluation and Optimization" << endl;
    cout << "=========================================" << endl; 
}

bool processPayment() {
    string cardNumber;
    cout << "=====================================================" << endl;
    cout << "               Enter Payment Details      " << endl;
    cout << "=====================================================" << endl;
    cout << "  Enter your card number: ";
    cin >> cardNumber;
    cout<<endl;

    cout << "  Processing payment..." << endl;
    return true; 
}

void inputPersonalDetails( string username,  string course) {
    string name, email, phone, startDate, preferredTime, reason, payment, signature, date;

    cout << "_______________________________________________________________" << endl;
    cout << "|                 Course Registration Form                     |" << endl;
    cout << "|--------------------------------------------------------------|" << endl;

    ofstream out(username + ".txt", ios::app);
    if (!out.is_open()) {
        cerr << "Error opening file for writing." << endl;
        return;
    }

    cout << "  Enter your name: ";
    getline(cin.ignore(), name);

    cout << "  Enter your email: ";
    getline(cin, email);

    cout << "  Enter your phone number: ";
    getline(cin, phone);

    cout << "  Enter the course start date: ";
    getline(cin, startDate);

    cout << "  Enter your preferred time: ";
    getline(cin, preferredTime);

    cout << "  Enter the reason for enrolling: ";
    getline(cin, reason);

    cout << "  Enter your payment method: ";
    getline(cin, payment);

    cout << "  Enter your signature: ";
    getline(cin, signature);

    cout << "  Enter the date: ";
    getline(cin, date);

    cout << "|_____________________________________________________________|" << endl;

    out << "Course Registration Form" << endl;
    out << "Course          : " << course << endl;
    out << "Name            : " << name << endl;
    out << "Email           : " << email << endl;
    out << "Phone           : " << phone << endl;
    out << "Start Date      : " << startDate << endl;
    out << "Preferred Time  : " << preferredTime << endl;
    out << "Reason for Enrolling : " << reason << endl;
    out << "Payment         : " << payment << endl;
    out << "Signature       : " << signature << endl;
    out << "Date            : " << date << endl;
    out << "-------------------------------" << endl;

    out.close();
    cout << "              'Registration completed successfully'" << endl;
}

void wifiLogin() {
     string correctPassword = "knwr";
    string username, password;

    cout << " ----------------------------------------------------" << endl;
    cout << "|                Wifi Login                          |" << endl;
    cout << "-----------------------------------------------------" << endl;

    while (true) {
       cout << "              Wifi Name: ";
        cin >> username;
        cout << "              Password: ";
        cin >> password;

        if (correctPassword == password) {
            cout << "          'Wifi connected successfully.'           " << endl;
            break;
        } else {
            cout << "     'Incorrect Password. Please Try again...'" << endl << endl;
        }
    }
}

void createAccountAndLogin(string storedPassword) {
    string email, password, name, useremail, userpassword;
    int choice;
    bool loginSuccessful = false;

    do {
        cout << "_______________________________________________________________" << endl;
        cout << "|                      Enter Your Choice                       |" << endl;
        cout << "|--------------------------------------------------------------|" << endl;
        cout << "|  1. Create Account                                           |" << endl;
        cout << "|  2. Login                                                    |" << endl;
        cout << "|______________________________________________________________|" << endl;
        cin >> choice;


        switch (choice) {
            case 1: {
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


                ofstream userFile(email + ".txt");
                if (!userFile.is_open()) {
                    cerr << "Error opening file for writing." << endl;
                    return;
                }

                userFile << password << endl;
                userFile.close();

                displayCourses();

                int courseChoice;
                cout << "Select the course you want to register for (enter number): ";
                cin >> courseChoice;

                string selectedCourse;
                switch (courseChoice) {
                    case 1:
                        selectedCourse = "C++ Programming";
                        break;
                    case 2:
                        selectedCourse = "Data Structures";
                        break;
                    case 3:
                        selectedCourse = "Algorithms";
                        break;
                    case 4:
                        selectedCourse = "Web Development";
                        break;
                    case 5:
                        selectedCourse = "Machine Learning";
                        break;
                    default:
                        cout << "Invalid choice, defaulting to 'C++ Programming'" << endl;
                        selectedCourse = "C++ Programming";
                        break;
                }

                ofstream courseFile(email + ".txt", ios::app);
                if (!courseFile.is_open()) {
                    cerr << "Error opening file for writing." << endl;
                    return;
                }
                courseFile << "Selected Course: " << selectedCourse << endl;
                courseFile.close();

                cout << "Account Created Successfully" << endl;
                if (processPayment()) {
                    inputPersonalDetails(email, selectedCourse);
                } else {
                    cout << "Payment failed. Registration could not be completed." << endl;
                }
                break;
            }

            case 2: {
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

                ifstream userFile(useremail + ".txt");
                if (userFile.is_open()) {
                    getline(userFile, storedPassword);
                    userFile.close();

                    if (userpassword == storedPassword) {
                        cout << "Login Successful!" << endl;

                        ifstream courseFile(useremail + ".txt");
                        if (courseFile.is_open()) {
                            string line;
                            while (getline(courseFile, line)) {
                                if (line.find("Selected Course: C++ Programming") != string::npos) {
                                    showCPlusPlusContent();
                                    break;
                                } else if (line.find("Selected Course: Data Structures") != string::npos) {
                                    showDataStructuresContent();
                                    break;
                                } else if (line.find("Selected Course: Algorithms") != string::npos) {
                                    showAlgorithmContent();
                                    break;
                                } else if (line.find("Selected Course: Web Development") != string::npos) {
                                    showWebDevelopmentContent();
                                    break;
                                } else if (line.find("Selected Course: Machine Learning") != string::npos) {
                                    showMachineLearningContent();
                                    break;
                                }
                            }
                            courseFile.close();
                        } else {
                            cout << "Error opening file for reading." << endl;
                        }
                        loginSuccessful = true;
                    } else {
                        cout << "Login Failed. Incorrect email or password." << endl;
                    }
                } else {
                    cout << "Login Failed. Incorrect email or password." << endl;
                }
                break;
            }

            default:
                cout << "Invalid choice. Please enter 1 or 2." << endl;
                break;
        }

    } while (!loginSuccessful);
}

void changePassword( string email) {
    string currentPassword, newPassword;

    cout << "Enter your current password: ";
    cin >> currentPassword;

    ifstream userFile(email + ".txt");
    if (!userFile.is_open()) {
        cerr << "Error opening file for reading." << endl;
        return;
    }

    string storedPassword;
    getline(userFile, storedPassword);
    userFile.close();

    if (currentPassword == storedPassword) {
        cout << "Enter your new password: ";
        cin >> newPassword;

        ofstream userFile(email + ".txt");
        if (!userFile.is_open()) {
            cerr << "Error opening file for writing." << endl;
            return;
        }
        userFile << newPassword << endl;
        userFile.close();
        cout << "Password changed successfully." << endl;
    } else {
        cout << "Current password is incorrect." << endl;
    }
}

void deleteUserAccount() {
    string email;

    cout << "Enter the email of the account to delete: ";
    cin >> email;

    if (remove((email + ".txt").c_str()) == 0) {
        cout << "Account deleted successfully." << endl;
    } else {
        cout << "Error deleting the account. Make sure the email is correct." << endl;
    }
}

void viewUserRegistrationDetails() {
    string email;

    cout << "Enter the email of the user to view details: ";
    cin >> email;

    ifstream userFile(email + ".txt");
    if (!userFile.is_open()) {
        cerr << "Error opening file for reading." << endl;
        return;
    }

    string line;
    cout << "User Registration Details" << endl;
    cout << "-------------------------------" << endl;

    while (getline(userFile, line)) {
        cout << line << endl;
    }

    userFile.close();
}

void updatePersonalInformation( string email) {
    string name, phone, startDate, preferredTime, reason;

    cout << "=======================================" << endl;
    cout << "      Update Personal Information   " << endl;
    cout << "=======================================" << endl;

    ifstream userFile(email + ".txt");
    if (!userFile.is_open()) {
        cerr << "Error opening file for reading." << endl;
        return;
    }

    stringstream buffer;
    buffer << userFile.rdbuf();
    userFile.close();

    string fileContent = buffer.str();
    cout << "Current Information:" << fileContent << endl;

    ofstream out(email + ".txt");
    if (!out.is_open()) {
        cerr << "Error opening file for writing." << endl;
        return;
    }

    cout << "Enter new name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter new phone number: ";
    getline(cin, phone);
    cout << "Enter new start date: ";
    getline(cin, startDate);
    cout << "Enter new preferred time: ";
    getline(cin, preferredTime);
    cout << "Enter new reason for enrolling: ";
    getline(cin, reason);

    out << "Course Registration Form" << endl;
    out << "Name            : " << name << endl;
    out << "Email           : " << email << endl;
    out << "Phone           : " << phone << endl;
    out << "Start Date      : " << startDate << endl;
    out << "Preferred Time  : " << preferredTime << endl;
    out << "Reason for Enrolling : " << reason << endl;
    out << "-------------------------------" << endl;


    out.close();
    cout << "Personal information updated successfully." << endl;
}

void adminFunctions() {
    int adminChoice;
    string adminname, adminpass;
    cout << "=========================================" << endl;
    cout << "              Admin Login            " << endl;
    cout << "=========================================" << endl;
    cout << "Enter the admin username: ";
    cin >> adminname;
    cout << "Enter the admin password: ";
    cin >> adminpass;
    if (adminname == "admin" && adminpass == "admin") {
        do {
            cout << "-------------------------------" << endl;
            cout << "     Admin Functions Menu       " << endl;
            cout << "-------------------------------" << endl;
            cout << "1. View Course Details" << endl;
            cout << "2. Delete User Account" << endl;
            cout << "3. View User Registration Details" << endl;
            cout << "4. Return to Main Menu" << endl;
            cout << "Enter your choice: ";
            cin >> adminChoice;

            switch (adminChoice) {
                case 1:
                    displayCourses();
                    break;
                case 2:
                    deleteUserAccount();
                    break;
                case 3:
                    viewUserRegistrationDetails();
                    break;
                case 4:
                    cout << "Returning to main menu." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please enter 1-4." << endl;
                    break;
            }
        } while (adminChoice != 4);
    } else {
        cout << "Sorry, you are not an admin." << endl;
    }
}

int main() {
    string storedPassword;
    wifiLogin();

    int choice;
    do {
       cout << "  _____________________________________________________________" << endl;
        cout << "|                       Main Menu                             |" << endl;
        cout << "|-------------------------------------------------------------|" << endl;
        cout << "|  1. Create Account and Login                                |" << endl;
        cout << "|  2. Change Password                                         |" << endl;
        cout << "|  3. Update Personal Information                             |" << endl;
        cout << "|  4. Admin Functions                                         |" << endl;
        cout << "|  5. Logout                                                  |" << endl;
        cout << "|  6. Help/Support                                            |" << endl;
        cout << "|  7. Exit                                                    |" << endl;
        cout << "|_____________________________________________________________|" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                createAccountAndLogin(storedPassword);
                break;

            case 2: {
                string email;
                cout << "Enter your email to change password: ";
                cin >> email;
                changePassword(email);
                break;
            }

            case 3: {
                string email;
                cout << "Enter your email to update personal information: ";
                cin >> email;
                updatePersonalInformation(email);
                break;
            }


            case 4:
                adminFunctions();
                break;

            case 5:
                cout << "------ You have logged out. --------" << endl;
                break;

            case 6:
                cout << "=====================================================" << endl;
                cout << "                    Help  Support        " << endl;
                cout << "|====================================================|" << endl;
                cout << " 1. Creating an Account: "<<endl;
                cout << " Select 'Create Account and Login' from the main menu." << endl;
                cout << " 2. Logging In: "<<endl;
                cout << " Enter your email and password in 'Create Account and "<<endl;
                cout << " Login'." << endl;
                cout << " 3. Changing Password: ";
                cout << " Choose 'Change Password' and provide your current and "<<endl; 
                cout << " new passwords." << endl;
                cout << " 4. Viewing Course Content: "<<endl;
                cout << " After logging in, you can view your course content." << endl;
                cout << " 5. Admin Functions: "<<endl;
                cout << " Access advanced features with admin credentials." << endl;
                cout << " 6. Contact Support: "<<endl;
                cout << " Email us at bimal@example.com for further help." << endl;
                cout << "|=====================================================|" << endl;
                break;

            case 7:
                cout << "Exiting the application. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}
