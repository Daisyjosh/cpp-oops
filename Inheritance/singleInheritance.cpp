#include <iostream>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout << "Animal Eats\n";
        }
};

class Dog : public Animal {
    public:
        void bark()
        {
            cout << "Dog Barks...\n";
        }
};

int main()
{
    Dog jupiter;
    jupiter.eat();
    jupiter.bark();
    return 0;
}

