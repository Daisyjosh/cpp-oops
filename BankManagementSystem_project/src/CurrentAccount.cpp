#include "../include/CurrentAccount.h"
#include <iostream>
using namespace std;

CurrentAccount::CurrentAccount(int accNo, string name, double bal)
    : Account(accNo, name, bal) {
}

void CurrentAccount::withdraw(double amount) {
    if (amount > balance + 5000) {
        cout << "Overdraft limit exceeded" << endl;
    } else {
        balance = balance - amount;
    }
}

void CurrentAccount::display() {
    cout << "--- Current Account ---" << endl;
    Account::display();
}
