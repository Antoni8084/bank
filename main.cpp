#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

   public:
     BankAccount(string accName, double initialBalance) {
        name = accName;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << "\nNew Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\nRemaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Account Holder: " << name << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Anthony Tanganyika", 500);
    int choice;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {

            case 1:
                double depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                acc.deposit(depositAmount);
                break;
            case 2:
                double withdrawAmount;
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                acc.withdraw(withdrawAmount);
                break;
            case 3:
                acc.display();
                break;
            case 4:
                cout << "Exiting. Goodbye!";
                break;
            default:
                cout << "Invalid choice!";
        }
    } while (choice != 4);
    return 0;
}