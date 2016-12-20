#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        tc--;
        int N,K;
        cin >> N >> K;
        int ARR[N];
        int x,y;
        cin >> x;
        for(int i=0;i<N-1;i++)
        {
        cin >> y;
        ARR[i] = y-x;
        x = y;
        }

    }
}
