#include <iostream>
using namespace std;

class Op
{
    public:
        int x;
        Op(int a)
        {
            x = a;
        }   
        Op operator + (Op d)
        {
            return Op(x + d.x);
        }
};

int main()
{
    Op v(8);
}