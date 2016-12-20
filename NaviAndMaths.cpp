#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
long long ans;
long long num;
long long den;
const long long MOD = 1000000007;
void solve(int,int,long long []);
long long findMMI(long long,long long);
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {   ans = 0;
        int N;
        cin >> N;
        long long ARR[N];
        for(int i=0;i<N;i++)
        {
            cin >> ARR[i];
        }
        for(int i=0;i<N-1;i++)
        {   num = ARR[i];
            den = ARR[i];
            solve(i,N,ARR);
        }
        cout << ans << endl;
        tc--;
    }
}
void solve(int i,int N,long long ARR[])
{
    if(i==N-1)
    {
        return;
    }
    else
    {
        num = num*ARR[i+1];
        den = den+ARR[i+1];
       long long res = num/den;
        if(res > MOD)
        {
        long long den2 = findMMI(den,MOD);

        res = (num*den2)%MOD;
        }

        if(ans < res)
        {
            ans = res;
        }

        solve(i+1,N,ARR);
    }
}
long long fast_pow(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
long long findMMI(long long n,long long M)
{
    return fast_pow(n,M-2,M);
}
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
long long ans;
long long num;
long long den;
const long long MOD = 1000000007;
void solve(int,int,long long []);
long long findMMI(long long,long long);
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {   ans = 0;
        int N;
        cin >> N;
        long long ARR[N];
        for(int i=0;i<N;i++)
        {
            cin >> ARR[i];
        }
        for(int i=0;i<N-1;i++)
        {   num = ARR[i];
            den = ARR[i];
            solve(i,N,ARR);
        }
        cout << ans << endl;
        tc--;
    }
}
void solve(int i,int N,long long ARR[])
{
    if(i==N-1)
    {
        return;
    }
    else
    {
        num = num*ARR[i+1];
        den = den+ARR[i+1];
       long long res = num/den;
        if(res > MOD)
        {
        long long den2 = findMMI(den,MOD);

        res = (num*den2)%MOD;
        }

        if(ans < res)
        {
            ans = res;
        }

        solve(i+1,N,ARR);
    }
}
long long fast_pow(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
long long findMMI(long long n,long long M)
{
    return fast_pow(n,M-2,M);
}
