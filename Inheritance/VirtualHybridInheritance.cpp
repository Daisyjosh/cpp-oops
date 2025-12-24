#include <iostream>
using namespace std;

class College
{
    public:
        string college_name = "Sri Shakthi";
};

class Study: virtual public College{
    public:
        void study()
        {
            cout << "Studying...\n" << endl;
        }
};

class Staff : virtual public College {
    public:
        void salary()
        {
            cout << "Salary Received\n";
        }
};

class Student : public Study, public Staff {

};

int main()
{
    Student s;
    cout << s.college_name << endl;
    s.study();
    s.salary();
    return 0;
}