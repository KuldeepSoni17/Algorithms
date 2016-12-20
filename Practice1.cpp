
#include<iostream>

using namespace std;
struct parent
{

   struct child
    {
        int b = 51;
    }child1;

    int a = 15;

}parent1;
class class1
{
private:
    int a{777};
public:
void showINT()
{
    cout << a;
}
};
void printf(int a,double b=10)
{
    cout << "That's" << a;

    cout << "That's" << b;
}
void TYPEshow(int a)
{
    cout << "That's an INT";
}
void TYPEshow(char a)
{
    cout << "That's a char";
    TYPEshow(10);

}

int main()
{

    class1 obj1;
    cout << parent1.child1.b + parent1.a << endl;
    cout << parent1.child1.b << endl;
    obj1.showINT();
    printf(4,5);
    TYPEshow('a');
    int i = 5;
    while(i == 10)
    {
        cin >> i;
        cout << "\a";
    }
return 0;
}
