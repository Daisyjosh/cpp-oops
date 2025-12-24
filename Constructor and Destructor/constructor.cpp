#include <iostream>
using namespace std;

class Student
{
    public:
        int id;
        Student() // default or non-paramaterised constructor
        {
            id = 101;
        }
};

int main()
{
    Student s1;
    cout << "ID: " << s1.id << endl;

}