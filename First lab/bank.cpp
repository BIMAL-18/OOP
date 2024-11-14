// Define a class bank to represent bank account with data members depositer name, acc_number, acc_type(as static), acc_balance.
// member function withdraw amount, deposit amount. friend function display details to display all the details.

#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string depositer_name;       
    int account_number;         
    static string account_type; 
    double account_balance;     

public:
   
    Bank(string name, int number, double balance) {
        depositer_name = name;
        account_number = number;
        account_balance = balance;
    }

    
    void withdrawAmount(double amount) {
        if (amount > 0 && amount <= account_balance) {
            account_balance -= amount;
            cout<<"Amount withdrawal successful. "<<endl;
            cout << "Updated balance after withdrawal is : " << account_balance << endl;
        } else {
            cout << "Withdrawal failed. Insufficient funds." << endl;
        }
    }

    
    void depositAmount(double amount) {
        if (amount > 0) {
            account_balance += amount;
            cout<<"Amount deposit successful."<<endl;
            cout << "Updated balance after deposit is : " << account_balance << endl;
        } else {
            cout << "Deposit failed. Invalid amount." << endl;
        }
    }

   
    friend void displayDetails(Bank obj);
};


string Bank::account_type = "Savings";


void displayDetails(Bank obj) {
    cout << "Depositer Name = " << obj.depositer_name << endl;
    cout << "Account Number = " << obj.account_number << endl;
    cout << "Account Type = " << Bank::account_type << endl; 
    cout << "Account Balance = " << obj.account_balance << endl;
}

int main() {
    
    Bank account("Valkyries",071456, 40000.0);

   
    account.depositAmount(2000);
    account.withdrawAmount(1000);

   
    displayDetails(account);

    return 0;
}
