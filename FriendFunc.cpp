#include<iostream>
using namespace std;

class B;                   //defined later
class A;
void add(A,B);

class A{
    private:
    int a;
    public:
    A(){
        a = 100;
    }
    friend void add(A,B);
};

class B{
    private:
    int b;
    public:
    B(){
        b = 100;
    }
    friend void add(A,B);
};

void add (A Aobj, B Bobj){
    cout << (Aobj.a + Bobj.b);
}

int main(){
    A A1;
    B B1;
    add(A1,B1);
    return 0;
}
