#include<iostream>
using namespace std;
class Test
{public:
    int T;
public:
   friend istream & operator >>(istream &obj,Test &obj1)
    {
        obj >> obj1.T;
    }
    friend std::ostream & operator <<(ostream &obj,Test &obj1)
    {
        obj << obj1.T;
    }

};
int main()
{
    Test T1;
    cin >> T1;
    cout << T1;
}
