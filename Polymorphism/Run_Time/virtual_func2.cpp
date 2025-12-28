#include <iostream>
using namespace std;

class Parent
{
    public:
        void show()
        {
            cout << "Parent class show...\n";
        }

        virtual void hello()
        {
            cout << "Parent Hello...\n";
        }
};

class Child : public Parent
{
    public:
        void show()
        {
            cout << "Child Class show..\n";
        }

        void hello()
        {
            cout << "Child hello..\n";
        }

};


int main()
{
    Child c1;
    Child c2;

    c2.hello();

    Parent *ptr;

    ptr = &c1; //Run time binding 
    ptr -> hello(); //virtual function
    return 0;
}