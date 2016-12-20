/*
if N = 5
    K = 3
    combinations:-
    3 1 1
    2 2 1
*/

#include<iostream>
using namespace std;
int sumt = 0;
void permute(int N,int K,int sum,int ARR[],int j,int k)
{
    if(K==1 && (k<=(N - sum)) && (ARR[j-1]<=(N-sum)))
    {
         ARR[j] = N - sum;
      /*for(int i=0;i<=j;i++)
        {
            cout << ARR[i] << " ";
        }
        cout << endl;*/
        j--;
        sumt++;


    }

    else
    {
        for(int i=k;(i<=N-(sum)-(K-1) && i>=ARR[j-1] );i++)
        {
            ARR[j] = i;
            j++;
            permute(N,K-1,sum+i,ARR,j,k);
            j--;
        }
    }
}
int main()
{
    int N,K;
    cin >> N >> K;
    int ARR[K];
    for(int i=1;i<N;i++)
    {
    ARR[0] = i;
    permute(N,K-1,i,ARR,1,i);
    }
    cout << sumt;
}
