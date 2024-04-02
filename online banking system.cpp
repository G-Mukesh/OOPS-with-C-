#include <iostream>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited Rs" << amount << " successfully.\n";
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn Rs" << amount << " successfully.\n";
        } else {
            cout << "Insufficient funds.\n";
        }
    }

    void checkBalance() {
        cout << "Your current balance is: Rs" << balance << endl;
    }
};

int main() {
    string name;
    double initialBalance;

    cout << "Welcome to Simple Online Banking System\n";
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter initial balance: Rs";
    cin >> initialBalance;

    BankAccount account(name, initialBalance);

    char choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        double amount;
        switch (choice) {
            case '1':
                cout << "Enter the amount to deposit: Rs";
                cin >> amount;
                account.deposit(amount);
                break;
            case '2':
                cout << "Enter the amount to withdraw: Rs";
                cin >> amount;
                account.withdraw(amount);
                break;
            case '3':
                account.checkBalance();
                break;
            case '4':
                cout << "Thank you for using our banking system. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using our banking system. Goodbye!\n";
    return 0;
}

