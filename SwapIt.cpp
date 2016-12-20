#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,K,pos=0,j;
        cin >> N >> K;
        int A[N],B[N];
        for(int i=0;i<N;i++)
        {
            cin >> A[i];
            B[i] = A[i];
        }
        sort(B,B+N);
        for(int i=0;i<N;i++)
        {
            if(K==0)
        {
            break;
        }

            for(j=0;j<N;j++)
        {

            if(B[i]==A[j])
            {
              if((j-pos)<=K)
                {
                    for(int p=0;p<(j-pos);p++)
                    {
                        swap(A[j-p],A[j-p-1]);
                    }
                    K = K - (j-pos);
                    pos++;
                }
            }
        }

        }
        for(int i=0;i<N;i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;

        tc--;
    }
return 0;}
