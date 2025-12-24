#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        int marks;
    public:
        void set_Marks(int m)
        {
            if(m >=0 && m <= 100)
                marks = m;
                
            else
                cout << "Invalid Marks" << endl;
        }

        int get_Marks()
        {
            return marks;
        }
};

int main()
{
    Student s1;
    s1.set_Marks(88);
    cout << "Marks: " << s1.get_Marks() << endl;
    return 0;
}