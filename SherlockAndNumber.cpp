#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,K,P,RES;
        cin >> N >> K >> P;
        int Q[K];
        for(int i=0;i<K;i++)
        {
            cin >> Q[i];
        }
        if(P>N-K)
        {
            cout << "-1" << endl;
        }
        else
        {
           RES = P;
           for(int i=0;i<K;i++)
           {
               if(Q[i]<=RES)
               {
                   RES++;
               }
            }
        cout << RES << endl;
        }

        tc--;
    }

}
