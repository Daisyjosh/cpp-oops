#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account {
    protected:
        int accountNumber;
        string holderName;
        double balance;
    public:
        Account(int accNo, string name, double bal);
        virtual void deposit(double amount);
        int getAccountNumber();
        virtual void withdraw(double amount) = 0;
        virtual void display();
        virtual ~Account();
        
    };
#endif
