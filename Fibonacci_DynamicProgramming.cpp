#include<iostream>
using namespace std;
int fib(int N,int ARR[]);
int res = 0;
int main()
{
    int N;
    cin >> N;
    int *ARR;
    ARR = new int[N];
    cout << fib(N,ARR);
}
int fib(int N,int ARR[])
{
 if(N>1)
 { res = fib(N-1,ARR) + fib(N-2,ARR);
    cout << N << endl;
    cout << res << endl << endl;
    return res;
 }
 else
 {
   cout << N << endl;
   return N;
 }

}
