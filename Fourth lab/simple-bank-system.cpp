    #include <iostream>
#include <iomanip> 
using namespace std;
class Account {
public:
    Account(double balance) : balance(balance) {}
    virtual ~Account() {}
    virtual void deposit(double amount) {
        balance += amount;
    }
    virtual void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
        }
    }
    virtual void applyInterest() = 0; 
    void displayBalance()  {
        cout << "Current balance: Rs " << fixed << balance << endl;
    }
protected:
    double balance;
};
class SavingsAccount : public Account {
public:
    SavingsAccount(double balance, double interestRate)
        : Account(balance), interestRate(interestRate) {}

    void applyInterest() {
        balance += balance * (interestRate / 100);
    }

private:
    double interestRate;
};
class CheckingAccount : public Account {
public:
    CheckingAccount(double balance, double fee)
        : Account(balance), fee(fee) {}

    void withdraw(double amount)   {
        if (amount + fee > balance) {
            cout << "Insufficient funds to cover withdrawal and fee." << endl;
        } else {
            balance -= (amount + fee);
        }
    }
    void applyInterest()  {
    }

private:
    double fee;
};

int main() {
    SavingsAccount savings(1000.0, 2.5)
     CheckingAccount checking(500.0, 1.0);   
    cout << "Initial Balances:" << endl;
    savings.displayBalance(); 
    checking.displayBalance();
    savings.deposit(200.0);
    savings.withdraw(150.0);
    savings.applyInterest();
    checking.deposit(100.0);
    checking.withdraw(50.0);
    checking.withdraw(50);
    cout << "Final Balances:" << endl;
    savings.displayBalance();
    checking.displayBalance();

    return 0;
}
