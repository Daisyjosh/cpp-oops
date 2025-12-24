#include <iostream>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout << "Animal Eats...\n";
        }
};

class Dog : public Animal
{
    public:
        void breath()
        {
            cout << "Animal breaths...\n";
        }
};

class Monkey : public Dog{
    public:
        void jump()
        {
            cout << "Animal jumps...\n";
        }
};

int main()
{
    Monkey pluto;
    pluto.eat();
    pluto.breath();
    pluto.jump();
    return 0;
}