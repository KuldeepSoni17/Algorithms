#include<iostream>
using namespace std;
class test
{   public:
    int T;
};
int main()
{
    test T1;
    T1.T = 5;
    cout << T1.T;
    test T2;
    cout << endl << T2.T;
    T2.T = 10;
    cout << endl << T1.T;

}
