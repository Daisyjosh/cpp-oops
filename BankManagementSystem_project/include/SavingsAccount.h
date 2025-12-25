#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
    public:
        SavingsAccount(int accNo, string name, double bal);

        void withdraw(double amount);

        void display();
};
#endif