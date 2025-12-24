#include <iostream>
using namespace std;

class College
{
    public:
        string college_name = "Sri Shakthi";
        void attend()
        {
            cout << "Attends Everyday.."<<endl;
        }
};

class Staff: public College{
    public:
        void salary()
        {
            cout << "Salary Received...\n";
        }
};

class MastersGrad : public Staff{
    public:
        void stipend()
        {
            cout << "Stipend Received..\n";
        }
};

int main()
{
    MastersGrad me1;
    me1.attend();
    me1.stipend();
    me1.salary();
    cout << "College Name: " << me1.college_name << endl;

    Staff emp1;
    emp1.attend();
    emp1.salary();
    cout << "College name: " << emp1.college_name << endl;
    return 0;



}