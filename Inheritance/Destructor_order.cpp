#include <iostream>
using namespace std;

class A
{
    public:
        ~A()
        {
            cout << "Parent Class" << endl;
        }
};

class B : public A{
    public:
        ~B()
        {
            cout << "Child Class of A" << endl;
        }
};

int main()
{
    B object;
    return 0;
}
