#include<iostream>
using namespace std;
int main()
{
int n;
int A[n],B[3];
for(int i=0;i<n;i=i+3)
{
B[0] = B[0] + A[i];
}
for(int i=1;i<n;i=i+3)
{
B[1] = B[1] + A[i];
}
for(int i=2;i<n;i=i+3)
{
B[2] = B[2] + A[i];
}
return 0;
}
