#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accnum;
    string name;
    float balance;

public:
  
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accnum;
        cin.ignore(); 

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Account created successfully!\n";
    }

   
    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << amount << " deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << " withdrawn successfully.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            cout << "Invalid withdrawal amount.\n";
        }
    }


    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accnum << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Current Balance: ?" << balance << endl;
    }
};


int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.display();
                break;
            case 5:
                cout << "Thank you for using our banking system!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
