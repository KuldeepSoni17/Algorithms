#include <iostream>
#include<math.h>
using namespace std;

class Triangle {
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
  Triangle first(10,20);
  cout << hypot() ;
  return;
}
