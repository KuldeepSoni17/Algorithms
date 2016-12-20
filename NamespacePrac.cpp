#include<iostream>
using namespace std;
namespace Test
{
    class Test1
    {
        int x=5;
    public:
       void display()
        {
            cout << x;
        }
    };
}
using namespace Test;
int main()
{
    Test1 T1;
    T1.display();
}
