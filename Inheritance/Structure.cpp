#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        string name;
    public:
        Person(string name) 
        {
            this->name = name;
            cout << "Person constructor\n";
        }
};

class Student : public Person{
    public:
        Student(string name) : Person(name)
        {
            cout << "Student Constructor\n";
        }

        void display()
        {
            cout << "Name: " << name << endl;
        }
};


int main()
{

    Student s1("Joshua");
    s1.display();
  
    return 0;
}