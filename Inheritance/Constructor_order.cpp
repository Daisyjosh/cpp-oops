#include <iostream>
using namespace std;

class A{
    public:
        A()
        {
            cout << "Constructor of Parent Class" << endl;
        }
};

class B : public A {
    public:
        B()
        {
            cout << "Constructor of child Class of A is B" << endl;
        }
};

class C : public B{
    public:
        C()
        {
            cout << "Constructor of child class of A and B is C" << endl;
        }
};

int main()
{
    C object;
    return 0;
}