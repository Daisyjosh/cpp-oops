#include "../include/BankManager.h"
#include <iostream>
using namespace std;

BankManager::BankManager() {
    count = 0;
}

void BankManager::createAccount() {

    int type;
    int accNo;
    string name;
    double bal;

    cout << "1. Savings Account" << endl;
    cout << "2. Current Account" << endl;
    cout << "Enter type: ";
    cin >> type;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> bal;

    if (type == 1) {
        accounts[count] = new SavingsAccount(accNo, name, bal);
    } else {
        accounts[count] = new CurrentAccount(accNo, name, bal);
    }

    count = count + 1;

    cout << "Account created successfully" << endl;
}

void BankManager::depositAmount() {

    int accNo;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for (int i = 0; i < count; i++) {

        if (accounts[i]->getAccountNumber() == accNo) {

            cout << "Enter Amount: ";
            cin >> amount;

            accounts[i]->deposit(amount);

            cout << "Deposited successfully" << endl;

            return;
        }
    }

    cout << "Account not found" << endl;
}

void BankManager::withdrawAmount() {

    int accNo;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for (int i = 0; i < count; i++) {

        if (accounts[i]->getAccountNumber() == accNo) {

            cout << "Enter Amount: ";
            cin >> amount;

            accounts[i]->withdraw(amount);

            return;
        }
    }

    cout << "Account not found" << endl;
}

void BankManager::displayAll() {

    for (int i = 0; i < count; i++) {
        accounts[i]->display();
    }
}

BankManager::~BankManager() {

    for (int i = 0; i < count; i++) {
        delete accounts[i];
    }
}
