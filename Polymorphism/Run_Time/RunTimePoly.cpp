#include <iostream>
using namespace std;

class Payment
{
    public:
        virtual void pay()
        {
            cout << "Payment Proceeded...\n";
        }
};

class UPI : public Payment{
    public:
        void pay()
        {
            cout << "Paying via UPI\n";
        }
};

class Card : public Payment{
    public:
        void pay()
        {
            cout << "Paying via Card\n";
        }
};

int main()
{
    Payment* p;
    UPI u;
    Card c;

    p=&u;
    p->pay();

    p=&c;
    p->pay();

    return 0;
}