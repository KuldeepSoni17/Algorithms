#include<iostream>
using namespace std;
void show(int a,int b)
{

    int x=a-b;
    if(x==0)
    {
        char a='z';
        throw a;

    }
    else{
        cout<<endl<<"a/x"<<a/x<<endl;
    }
}
int main()
{

    try{

        show(5,5);

        }
    catch(char a)
    {

        cout<<"a:"<<a<<endl;

    }
    return 0;
}
