#include <iostream>
using namespace std;

class Sports{
    public:
        void play()
        {
            cout << "I Play..\n";
        }
};

class Study{
    public:
        void learn()
        {
            cout << "I Learn...\n";
        }
};

class Student : public Sports, public Study {
    public:
        Student()
        {
            cout << "I am a Student" << endl;
        }
};

int main()
{
    Student daisy;
    daisy.play();
    daisy.learn();
    return 0;
    

}