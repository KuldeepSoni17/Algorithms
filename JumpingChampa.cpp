#include<iostream>
#include<algorithm>
using namespace std;

long int main()
{
    long int tc;
    cin >> tc;
    while(tc)
    {
        long int N,Q,Tot;
        cin >> N >> Q;
        long int H[N];
        for(long int i=0;i<N;i++)
        {
            cin >> H[i];
        }
        sort(H,H+N);
        Tot = 0;
        for(long int i=1;i<N;i++)
        {
            Tot = Tot + (H[i] - H[i-1])*Q;
        }
        cout << Tot << endl;
        tc--;
    }
    return 0;
}
