#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
        cout << "Account created with account number: " << accountNumber << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account with account number " << accountNumber << " is being destroyed." << endl;
    }

    // Other member functions can be added as needed
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " into account " << accountNumber << ". New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn " << amount << " from account " << accountNumber << ". New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds in account " << accountNumber << " to withdraw " << amount << endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    // Creating an instance of the BankAccount class
    BankAccount myAccount("12345", 1000.0);

    // Depositing and withdrawing from the account
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Displaying the final balance
    cout << "Final balance in account " << myAccount.getBalance() << endl;

    return 0;
}

