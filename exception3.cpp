#include<iostream>
using namespace std;
class Abc
{
public:
    void show(int a,int b)
    {
        int x=a-b;
        if(x==0)
        {   char s='z';
            throw s;
            cout << "HELLO";
            throw x;
        }
        else
        {
            cout<<endl<<"a/x: "<<a/x<<endl;
        }
    }
};
int main()
{
Abc a;
    try
    {
        a.show(6,6);
        a.show(6,6);
    }
    catch(int x)
    {

        cout<<"x : "<<x<<endl;
    }
catch(char s)
    {

        cout<<"s : "<<s<<endl;
    }

    return 0;
}
