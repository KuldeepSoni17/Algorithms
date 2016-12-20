
#include<iostream.h>

using namespace std;

struct parent
{
    int a;
    struct child;
    {
        int b = 10;
    }child1;
}parent1;
int main()
{
    printf("%d",parent1.child1.b);
return 0;
}
