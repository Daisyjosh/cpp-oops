#include <iostream>
using namespace std;
 
class Parent{
    public:
        virtual ~Parent()
        {
            cout << "Parent Destructor\n";
        }
};

class Child{
    public:
        ~Child()
        {
            cout<< "Derived Destructor\n";
        }
};