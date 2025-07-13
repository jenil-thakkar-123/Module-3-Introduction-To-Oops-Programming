#include <iostream>
using namespace std;
// Define BankAccount class
class BankAccount {
private:
    float balance;  // Encapsulated (private) data member
public:
    // Constructor to initialize balance
    BankAccount() {
        balance = 0.0;
    }
    // Function to deposit amount
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    // Function to withdraw amount
    void withdraw(float amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
    // Function to check balance
    void displayBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
};
int main() {
    BankAccount account;  // Create object
    // Perform transactions
    account.deposit(500);
    account.withdraw(150);
    account.displayBalance();
    return 0;
}
