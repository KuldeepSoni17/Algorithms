#include<iostream>
using namespace std;

class Test
{
public:
    //int P = 400;
    int r = 400;
    int q = 400;
   friend void operator << (ostream &out, Test T1);
};
enum day {X,Y,Z};
void operator << (ostream &out, Test T1)
{
    out << T1.r;
    //return

}
int main()
{
    int b;
    Test T1;
    cout << T1;
    cout << "\n" << b << endl;
    cout << sizeof(&T1);

}
