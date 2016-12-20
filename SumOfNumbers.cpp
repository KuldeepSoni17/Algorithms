#include<iostream>
#include<algorithm>
using namespace std;
int cnt,sum;
int flag;
void solve(int i,int N,int arr[],int K,int ARR[]);

int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {   flag = 0;
        int N;
        cin >> N;
        int ARR[N];
        for(int i=0;i<N;i++)
        {
            cin >> ARR[i];
        }
        int K;
        cin >> K;
        for(int i=0;i<N;i++)
        {   int arr[N];
            sum = 0;
            cnt = 0;
            solve(i,N,arr,K,ARR);
        }
        if(flag==0)

        {
            cout << "SORRY WE DIDNT FOUND IT";
        }
        tc--;
    }
}
void solve(int i,int N,int arr[],int K,int ARR[])
{
    if(sum==K)
    {   flag = 1;
        for(int k=0;k<cnt;k++)
        {
            cout << arr[k] << endl;
        }
        cout << "YES WE DID IT";
        return;
    }
    for(int j=i;j<N;j++)
    {
    arr[cnt] = ARR[j];
    sum += arr[cnt];
    cnt++;
    solve(j+1,N,arr,K,ARR);
    cnt--;
    sum -= arr[cnt];
    arr[cnt] = 0;
    }


}

