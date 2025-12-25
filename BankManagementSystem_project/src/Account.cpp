#include "../include/Account.h"

Account::Account(int accNo, string name,double bal){
    accountNumber = accNo;
    holderName = name;
    balance = bal;
}


void Account::deposit(double amount)
{
    balance = balance + amount;
}

int Account::getAccountNumber()
{
    return accountNumber;
}

void Account::display()
{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Holder Name: " <<  holderName << endl;
    cout << "Balance: " << balance << endl;
}

Account::~Account(){

}
