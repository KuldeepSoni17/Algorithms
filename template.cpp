#include<iostream>
using namespace std;

template<typename T> void printit(T A)
{
    cout << sizeof(A) << endl;
}
template<typename T>
class Test
{
    public:
    T cons;
    void printit(void)
    {
        cout << "Enter";
        cin >> cons;
        cout << sizeof(cons);
    }

};
int main()
{
    printit(5);
    printit('a');
    printit(451.545);
    Test<int> T1;
    T1.printit();
}
