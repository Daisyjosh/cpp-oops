#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
        string id;
        string name;
        Student()
        {
            cout << "Constructor is evoked!!!" << endl;
        }
        Student(string id, string name)
        {
            this->id = id;
            this->name = name;
        }
};

int main()
{
    Student s1; // default constructor will be called automatically
    Student s2("714023105013","Daisy"); // parameterised contructor is called automatically
    cout << "Reg no: " << s2.id << endl;
    cout << "Name: " << s2.name << endl;
    return 0;
}