#include<iostream>
using namespace std;
int main()
{

    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    int x=a-b;
    try
    {
    if(x!=0)
    {
        cout<<endl<<"a/x:"<<a/x<<endl;
    }
    else
    {
        throw(x);
    }
    }
    catch(int i)
    {

        cout<<"exception occur";
    }
return 0;
}
