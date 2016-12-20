#include<iostream>
using namespace std;
#define MOD 1000000007
int main()
{
    string s;
    long ans=0;
    long mult=1;
    cin >> s;
    long len = s.length();
    for(long j=len-1;j>=0;j--)
    {
        int a = s[j]-48;
     //   cout << a << " " << j <<endl;
        ans = (ans%MOD + ( (a%MOD) * ((j+1)%MOD) * (mult%MOD))%MOD)%MOD;
      //  cout << ans << " " << mult <<endl;
        mult = ((mult%MOD * 10) + 1)%MOD;

    }
    cout << ans;
}
