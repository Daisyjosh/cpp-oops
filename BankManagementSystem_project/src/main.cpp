#include "../include/BankManager.h"
#include <iostream>
using namespace std;

int main() {

    BankManager manager;
    int choice;

    while (true) {

        cout << "\n--- BANK MENU ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display All Accounts\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            manager.createAccount();
        } 
        else if (choice == 2) {
            manager.depositAmount();
        } 
        else if (choice == 3) {
            manager.withdrawAmount();
        } 
        else if (choice == 4) {
            manager.displayAll();
        } 
        else if (choice == 5) {
            break;
        } 
        else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
