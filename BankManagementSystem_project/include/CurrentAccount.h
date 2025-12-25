#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "Account.h"

class CurrentAccount : public Account {

public:

    CurrentAccount(int accNo, string name, double bal);

    void withdraw(double amount);

    void display();
};

#endif
