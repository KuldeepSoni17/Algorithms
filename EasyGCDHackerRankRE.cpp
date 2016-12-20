#include<math.h>
#include<iostream>
using namespace std;
long long int gcdr (long long int a,long long int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}
int main()
{
    long long int N,res;
    long long int K,x,a;
    cin >> N >> K;
    cin >> a;
    while(N>1)
    {
        cin >> x;
        a = gcdr(x,a);
        N--;
    }
    N=0;
    for(long long int i=2;i<(sqrt(a));i++)
    {
            if(a%i==0)
            {
                res = K-(K%i);
                N = max(res,N);
                cout << N << res << endl;
                    cout << a << i << endl;
                res = K-(K%(a/i));
                N = max(res,N);
                                cout << N << res << endl;

            }
    }
    res = K-(K%a);
    N = max(res,N);
                    cout << N << res << endl;
    cout << N;



}
