#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int tc;
    string P;
    string F;

    cin >> tc;
    while(tc)
    {
        cin >> P;
        cin >> F;

        int G[F.size()];
        for(int i=0;i<F.size();i++)
        {
            for(int j=0;j<26;j++)
            {
                if(F[i]==P[j])
                {
                    G[i] = j;
                }
            }
        }
            sort(G,G+F.size());
        for(int i=0;i<F.size();i++)
        {
            int x = G[i];
            //cout << x << " " << i;
            cout << P[x];
        }
        cout << endl;
    tc--;
    }
}
