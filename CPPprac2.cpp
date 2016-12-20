#include<iostream>
using namespace std;
class Test

{
public:
    static int n;
    public:
 static void inline disp();
//   {
//       cout << n;
//   }
friend void manip(int x);
friend void manip(int &x);
};
int Test::n = 8;
void Test::disp()
{
    cout << "BhaiBhai" ;
}
void manip(int x)
{
    x = 1000;
    cout << "value" << endl;
}
//void manip(int &x)
//{
//    cout << "value" << endl;
//    x = 1050;
//}
int main()
{
Test::disp();
//manip(Test::n);
cout << Test::n;
manip(Test::n);
cout << Test::n;
}
