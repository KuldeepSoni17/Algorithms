#include<iostream>
using namespace std;
int main()
{
long long int n;
cin >> n;
long long int A[n],B[3]={0};
for(long long int i=0;i!=n;i++)
{
    cin >> A[i];
}
for(long long int i=0;i<n;i=i+3)
{
B[0] = B[0] + A[i];
}
cout << B[0] << " ";
for(long long int i=1;i<n;i=i+3)
{
B[1] = B[1] + A[i];
}
cout << B[1] << " ";
for(long long int i=2;i<n;i=i+3)
{
B[2] = B[2] + A[i];
}
cout << B[2] << " ";

return 0;
}
