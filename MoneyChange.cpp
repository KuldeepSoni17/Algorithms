#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,K;
        cin >> N >> K;
        int S[N],W[K];
        for(int i=0;i<K;i++)
        {
            cin >> W[i];
        }
        for(int i=0;i<N;i++)
        {
            cin >> S[i];
        }
        for(int i=0;i<N;i++){
        int strta = 0,enda=K,mida,flag=1;
        while(flag!=0)
        {   mida = (strta+enda)/2;
            if(W[mida]<=S[i] && W[mida+1]>=S[i])
            {
                flag = 0;
            }
            else
            {
                if(W[mida]<=S[i] && W[mida+1]<=S[i])
             strta = mida;
             else
             enda = mida+1;
            }
        }
        cout << mida << endl;
        }
        tc--;
    }

}
