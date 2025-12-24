#include <iostream>
using namespace std;

class Vehicle
{
    public:
        void start()
        {
            cout << "Vehicle Started\n";
        }
};

class Car : public Vehicle
{
    public:
        void four_wheeler()
        {
            cout << "Car is a Four Wheeler" <<endl;
        }
};      

class Bike : public Vehicle
{
    public:
        void two_wheeler()
        {
            cout << "Bike is a two wheeler"  << endl;
        }
};

int main()
{
    Car Maruthi;
    Bike Rs200;
    Maruthi.start();
    Maruthi.four_wheeler();
    Rs200.start();
    Rs200.two_wheeler();
    return 0;
}