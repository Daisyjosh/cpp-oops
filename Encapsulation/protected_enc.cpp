#include <iostream>
#include <string>
using namespace std;

class College
{
    protected:
        float cgpa;
    
};

class Student : public College{
    public:
        void setCGPA(float value)
        {
            cgpa = value;
        }

        void display()
        {
            cout << "CGPA" << cgpa << endl;
        }
};

class MasterGrad : public Student {
    private:
        int stipend;
    public:
        MasterGrad(int amount)
        {
            if(amount > 0)
                stipend = amount;
            else
                stipend = 0;
        }

        void get_stipend(){
            cout << "Stipend of the Master Grad: " << stipend;
        }
};

int main()
{
    Student s;
    s.setCGPA(9.9);
    s.display();

    MasterGrad m1(5000);
    m1.setCGPA(8.7);
    m1.display();
    m1.get_stipend();



    return 0;
}