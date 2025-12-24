#include <iostream>
#include <string>
using namespace std;

class Student1 //Memory Leak
{
    public:
        int* data;
        Student1(int value)
        {
            data = new int(value);
            cout << "Memory Leak" << endl;
        }

};

class Student2 
{
    public:
        int* data;
        Student2(int value)
        {
            data = new int(value);
        }

        ~Student2(){
            delete data;
            cout << "Memory Freed" << endl;
        }
};

class Student3
{
    public:
        Student3()
        {
            cout << "Constructor of Student3" << endl;
        }
        ~Student3()
        {
            cout << "Destructor" << endl;
        }
};


int main()
{
    Student1 s1(1);
    Student2 s2(2);
    
    //New and Delete
    Student3* s3 = new Student3();
    delete s3;
    return 0;
}