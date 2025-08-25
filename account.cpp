#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Create an Account class with accountNumber, ownerName, and balance attributes
class Account {
private: // encapsulation
    string accountNumber;
    string ownerName;  // extension request: ownerName attribute
    double balance;
public:
    // default constructor
    Account() {}

    // setters for account attributes
    void setAccountNumber(string acc) {
        accountNumber = acc;
    }

    // setter for balance
    void setBalance(double bal) {
        balance = bal;
    }

    // setter for owner name
    void setOwnerName(string name) {
        ownerName = name;
    }

    // method to display account information and current balance
    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Current balance: " 
             << fixed << setprecision(2) << balance << " VND" << endl << endl;
    }

    // method to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << fixed << setprecision(2) << amount << " VND" << endl;
    }

    // method to withdraw money from the account (maintains a minimum balance of 100000)
    void withdraw(double amount) {
        if (amount > balance - 100000) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << fixed << setprecision(2) << amount << " VND" << endl;
        }
    }
};

int main() {
    // Create an Account object
    Account Account1;

    // Set account details
    Account1.setAccountNumber("102507936");
    Account1.setOwnerName("Ngo Quang Truong");
    Account1.setBalance(5000000);

    // Display initial account info
    Account1.displayBalance();

    // Deposit 2,000,000 VND
    Account1.deposit(2000000);
    Account1.displayBalance();

    // Withdraw 1,000,000 VND
    Account1.withdraw(1000000);
    Account1.displayBalance();

    // Attempt to withdraw 7,000,000 VND (should fail due to insufficient balance)
    Account1.withdraw(7000000);
    Account1.displayBalance();

    // Expected output example:
    // Account Number: 102507936
    // Owner Name: Ngo Quang Truong
    // Current balance: 5000000.00 VND
    // Deposited: 2000000.00 VND
    // Current balance: 7000000.00 VND
    // Withdrew: 1000000.00 VND
    // Current balance: 6000000.00 VND
    // Insufficient balance!
    // Current balance: 6000000.00 VND

    return 0;
}
