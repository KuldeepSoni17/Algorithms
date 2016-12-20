#include<iostream>
using namespace std;

class simple;
class dimple
{
    public:
       void set_data(simple&,int);
};
class simple
{
      int x;
    public:
        int get_data(void);
       friend void dimple :: set_data(simple&,int);
};
void dimple :: set_data(simple &a,int b)
{
    a.x=b;
}
int simple :: get_data(void)
{
    return x;
}
int main()
{
    simple e;
    dimple f;
    f.set_data(e,5);
    cout<<e.get_data();
    return 0;
}
