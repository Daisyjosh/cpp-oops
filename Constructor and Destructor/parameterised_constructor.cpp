#include <iostream>
#include <string>
using namespace std;

class Student
{
    public: //access modifier
        int id;
        string name;
        Student(int i, string n) // parameterised constructor
        {
            id = i;
            name = n;
        }
};

int main()
{
    Student s1(101,"Daisy");
    cout << "Name: " << s1.name << endl;
    cout << "Id: " << s1.id << endl;
    return 0;
}