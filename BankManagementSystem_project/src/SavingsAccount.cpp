#include "../include/SavingsAccount.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(int accNo, string name, double bal)
    : Account(accNo, name, bal) {
}

void SavingsAccount::withdraw(double amount) {

    if (amount > balance) {
        cout << "Insufficient balance" << endl;
    } else {
        balance = balance - amount;
    }
}

void SavingsAccount::display() {

    cout << "--- Savings Account ---" << endl;
    Account::display();
}
