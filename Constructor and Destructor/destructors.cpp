//Deallocate the memory of an object

#include <iostream>
using namespace std;

class Car 
{   
    public:
        string name;
        string color;
    
        
    ~Car()
    {
        cout << "Deleting object";
    }
    

};

int main()
{
    Car c1;
    return 0;
}