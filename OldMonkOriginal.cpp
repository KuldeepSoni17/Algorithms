
#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,RES;
        cin >> N;
        int *A,*B;
        A = new int[N];
        B = new int[N];
        tc--;
        for(int i=0;i<N;i++)
        {
            cin >> A[i];
        }
        for(int i=0;i<N;i++)
        {
            cin >> B[i];
        }
        RES = 0;
        int X;
        for(int i=0;i<N;i++)
        {
            X = 0;
            if(B[i]>=A[i])
            {
                int j=i;
                while(B[j]>=A[i])
                {
                    X++;
                    j++;
                    if(j==N)
                        break;
                }
            }
            RES = max(RES,X-1);
        }
    cout << RES << endl;
    }
}

