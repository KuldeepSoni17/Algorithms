#include<iostream>
#include<algorithm>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int mn,mx,N,K;
        cin >> N >> K;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin >> arr[i];
        }
        qsort (arr, N, sizeof(int), compare);
        mn = arr[0] + arr[N-1];
        mx = mn;
        for(int i=0;i<=N/2;i++)
        {
            if(arr[i] + arr[N-1-i] < mn)
            {
                mn = arr[i] + arr[N-i-1];
            }
            if(arr[i] + arr[N-i-1] > mx)
            {
                mx = arr[i] + arr[N-i-1];
            }
        }
        //cout << mx << " " << mn << " " << K << " " << mx-mn << endl;
        if((mx-mn)>K)
        {
            cout <<"No more girlfriends!" << endl;
        }
        else if((mx-mn)==K)
        {
            cout <<"Lucky chap!" << endl;
        }
        else
        {
            cout <<"Chick magnet Jhool!" << endl;
        }
        tc--;
    }
}
