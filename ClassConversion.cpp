#include<iostream>
using namespace std;

class A
{
    public:
    operator int()
    {
        return 5;
    }
    operator char()
    {
        return 'a';
    }
};
int main()
{
    A a1;
    int B;
    B = a1;
    cout << B;
}
