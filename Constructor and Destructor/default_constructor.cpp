#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
        int id;
        string name;
        Student()
        {
            cout << "Constructor being called" << endl;
        }
        ~Student()
        {
            cout << "Destructor being called" << endl;
        }
};

int main()
{
    Student s1;
    return 0;
}