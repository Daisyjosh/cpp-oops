#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
        int balance;
    public:
        BankAccount(int balance)
        {
            cout << "Welcome to the Bank" << endl;
            cout << "\n";
            this->balance = balance;
        }

        void deposit(int amount)
        {
            if(amount > 0)
            {
                cout << "Depositing...." << endl;
                balance+=amount;
                cout << amount << " is Deposited to your account" << endl;
                cout << "\n";
            }
        }
        void withdraw(int amount)
        {
            if(balance >= amount)
            {
                cout << "Withdraw process has been started...." << endl;
                balance -= amount;
                cout << amount << " is withdrawn from your account" << endl;
                cout << "\n";
            }
            else{
                cout << "Insufficient Balance" << endl;
                cout << balance << " this is your current balance" << endl;
                cout << "\n";
            }

        }

        int getBalance()
        {
            
            return balance;
        }
};

int main()
{
    BankAccount acc1(50000); // Inializing Balance
    cout << "Balance Enquiry" << endl;
    cout << "Balance Amount: "<< acc1.getBalance() << endl;
    cout << "\n"; //return balance
    acc1.withdraw(3000); // withdraw money
    acc1.withdraw(10000000); // Withdraw excess money 
    acc1.deposit(8000);
    return 0;
}
