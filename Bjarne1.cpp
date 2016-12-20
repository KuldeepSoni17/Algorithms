#include<iostream>
using namespace std;
class Container {
     public: virtual double& operator[](int) = 0; //pure virtual function
    virtual int size() const = 0; //const member function (§3.2.1.1)
    virtual ~Container() {} //d e s t r u c t o r ( § 3 . 2 . 1 . 2 )
};
void use(Container& c) {
     const int sz = c.size();
for (int i=0; i!=sz; ++i)
    cout << c[i] << '\n';
}
class Vector_container : public Container { //Vector_container implements Container
vector v;
 public:
      Vector_container(int s) : v(s) { } //Vector of s elements
      ~Vector_container()
 {
 }
double& operator[](int i)
 { return v[i]; }
 int size() const { return v.siz e();}
};
void g() { Vector_container vc {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; use(vc); }
int main()
{
g();
}
