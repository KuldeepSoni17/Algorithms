#include<iostream>

namespace test
{
    void printit(int a)
    {
        std::cout << (char)a;
    }
}
class testq
{
public:
int p(int a) const
{
    std::cout << a++;
}
int *f;
mutable int z = 7;
};

const int k = 5;
int main()
{
        testq t1;
        test::printit(24);
        (1==3)?std::cout << 1:std::cout << 2;
        //const
        int i = 5;
        std::cout << --(++i);
        t1.p(54);
        t1.z = t1.z + 5;
        std::cout << "K-" << t1.z;
}
