#include <iostream>
#include<math.h>
using namespace std;

class Triangle {
public:
int base,height;
 public:
Triangle(int i, int j)
{
 base = i;
 height = j;
}
int hypot()
{
 return sqrt(((base*base) + (height*height)));
}
};
int main()
{
  int base,height;
  cin >> base >> height;
  Triangle first(base,height);
  cout << first.hypot() << "\t"<<  first.base <<  "\t"<<  first.height ;
  return 0;
}
