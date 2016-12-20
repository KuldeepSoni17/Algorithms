#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int N,K,X,Y,sum,,maxm,minm;
    cin >> N >> K;
    int ARR[N-1];
    cin >> X;
    minm = X;
    maxm = 0;
    sum = 0;
    for(int i=0;i<N-2;i++)
    {
        cin >> Y;
        ARR[i] = Y-X;
        maxm = max(ARR[i],maxm);
        minm = min(minm,ARR[i]);
        X = Y;
        sum = ARR[i];
    }

    if(K==1)
    {
        cout << ceil(sum/2) << endl;
    }
    else if(K==(N-1))
    {
     cout << ceil(minm/2) << endl;
    }
    else
    {
        int flag = 0;
        Y = 0;

        while(flag==0)
        {
            X = 0;
            while(X!=ARR[N-2])
            {
              for(int i=0;i<=Y;i++)
              {
                  X += ARR[i];
              }
              for(int j=)
            }
        Y++;
        }
    }

}
