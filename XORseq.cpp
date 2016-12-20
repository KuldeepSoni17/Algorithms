#include<iostream>
using namespace std;

long long cnt(long long i,long long j,int dif)
{
    if(i-j>2)
    {
    long long mid = (i+j)/2;
    long long A=cnt(i,mid);
    long long B=cnt(mid,j);
    }


}
int main()
{
    long long L,R;
    cin >> L >> R;
    if(L-R%2==0)
    {
        cout << cnt(0,L,1) ^ cnt(L+1,R,2);
    }
    else
    {
     cout << cnt(L,R,2);
    }
    return 0;
}
