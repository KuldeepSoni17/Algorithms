#include<iostream>
#include<algorithm>
#include<math.h>
static int crtans;
using namespace std;
void permute(int n,int cnt,int sum,int i,int arr[],int ARR[])
{
    if(cnt==n/2)
    {   int res = 0;
        for(int j=0;j<cnt;j++)
        {
            res += arr[j];
        }
        //cout << "res=" << res << endl;
        if(abs(crtans-sum)>abs(res-sum))
        { //  cout << "crtans=" << crtans << endl;
            crtans = res;
            //cout << "crtans=" << crtans << endl;
        }
        if(i<n)
        {
        arr[cnt] = 0;
        cnt--;
        }
        else{
        return;
        }
    }
    {
        arr[cnt] = ARR[i];
        cnt++;
    //    cout << cnt << " " << ARR[i] << endl;
        permute(n,cnt,sum,i+1,arr,ARR);

    }
}
int main()
{
    int n;
    cin >> n ;
    int ARR[n],sum=0,arr[n/2];
    for(int i=0;i<n;i++)
    {
        cin >> ARR[i];
        sum += ARR[i];
    }
    sum = sum / 2;
    for(int i=0;i<((n+1)/2)+1;i++)
    {   //cout << crtans<< endl ;
        permute(n,0,sum,i,arr,ARR);
    }
    cout << crtans;

}
