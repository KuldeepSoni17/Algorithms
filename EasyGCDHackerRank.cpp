#include<iostream>
using namespace std;
long long int gcdr (long long int a,long long int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}
int main()
{
    long long int N;
    long long int K,x,a;
    cin >> N >> K;
    cin >> a;
    while(N>1)
    {
        cin >> x;
        a = gcdr(x,a);
        N--;
    }
    N = K/2;
    while(K>=N)
    {   x = gcdr(K,a);
        if(x!=1)
        {
            cout << K;
            return 0;
        }
        K--;
    }
    if(x==1)
    {
        cout << "0";
    }

}
