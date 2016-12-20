#include<iostream>

using namespace std;
class A
{
       public:
         int a;
         void set(A,int);
         void set(int,A&);
         void set(A*,int);
};
void A :: set(A a1,int p)
{
    a1.a=p;
}
void A :: set(int q, A &y)
{
    y.a=q;
}
void A :: set(A *z,int r)
{
    z->a=r;
}
int main()
{
    A a1;
    a1.a=10;
    cout<<a1.a<<"\n\n Before Passing:\n\n";
    a1.set(a1,5);
    cout<<"\n\n After Passing : \n\n"<<a1.a;
    a1.set(8,a1);
    cout<<"\n\n After By Reference: \n\n"<<a1.a;
    a1.set(&a1,6);
    cout<<"\n\n After Passing Pointer: \n\n "<<a1.a;
}
