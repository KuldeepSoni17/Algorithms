#include<iostream>
using namespace std;
class Test
{
public:
    int n;
public:
    Test(int x)
    {
        n = x;
        cout << "Object created" << endl;
    }
    operator int()
    {
        return n;
    }

};
class Test2
{   public:
    int a;

    operator  Test()
    {
        //Test T1;
        Test2 temp;
        temp.a = 5;
        return temp;
    }

};
int main()
{
    Test T1=5;
    Test *T2;
    T2 = new Test(5);
    int x =  6;
    T1 = 6;
    x = int(T1);
    cout << x;
    x = T1;
    cout << x;
    Test2 Q1;
    Q1 = Test(T1);

}
