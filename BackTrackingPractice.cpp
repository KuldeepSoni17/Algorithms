#include<algorithm>
#include<iostream>
using namespace  std;
int backtracking(int n,int N);
int backtracking(int n)
{
    for(int i=0;i<n;i++)
    {   backtracking(i,n);
        cout <<  endl;
    }
}
int backtracking(int n, int N)
{
    if(n==N)
    {
        return 1;
    }

    else
    {
        cout << n;
        backtracking(n+1,N);
        cout <<  endl;
    }
}

int main()
{
    backtracking(4);
    return 0;
}
