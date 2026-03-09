#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Setters
    void setAccountNumber(int accNum) { accountNumber = accNum; }
    void setAccountHolderName(string name) { accountHolderName = name; }
    void setBalance(double bal) { balance = bal; }

    // Getters
    int getAccountNumber() { return accountNumber; }
    string getAccountHolderName() { return accountHolderName; }
    double getBalance() { return balance; }

    // Deposit Method
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw Method
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrawn: " << amount << endl;
        }
    }

    // Display Method
    void displayAccountDetails() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    double amount;

    // Initial Account Setup
    int accNo;
    string name;
    double initialBal;

    cout << "Enter Account Number: ";
    cin >> accNo;
    account.setAccountNumber(accNo);

    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, name);
    account.setAccountHolderName(name);

    cout << "Enter Initial Balance: ";
    cin >> initialBal;
    account.setBalance(initialBal);

    // Menu Driven Program
    while (true) {
        cout << "\n--- Banking System Menu ---" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
        } 
        else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
        } 
        else if (choice == 3) {
            account.displayAccountDetails();
        } 
        else if (choice == 4) {
            cout << "Exiting... Thank you!" << endl;
            break;
        } 
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}


