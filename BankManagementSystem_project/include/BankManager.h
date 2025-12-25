#ifndef BANKMANAGER_H
#define BANKMANAGER_H

#include "SavingsAccount.h"
#include "CurrentAccount.h"

class BankManager {

private:
    Account* accounts[100];
    int count;

public:

    BankManager();

    void createAccount();

    void depositAmount();

    void withdrawAmount();

    void displayAll();

    ~BankManager();
};

#endif
