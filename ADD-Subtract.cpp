#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,K,res;
        int ans = 999999999;
        cin >> N >> K;
        int values[N];
        for(int i=0;i<N;i++)
        {
            cin >> values[i];
        }
        sort(values,values+N);

        int i=0;
        while(i!=1)
        {
            for(int j=i;j<=N-K;j++)
            {
                for(int p=j;p<j+K;p++)
                {   res = 0;

                    for(int q=j;q<j+K;q++)
                    {

                     if(values[q]-values[p] < 0)
                     {
                         res += abs((values[q]-values[p]))*3;
                     }
                     else
                     {
                         res += abs((values[q]-values[p]))*5;
                     }
                    }

                    ans = min(ans,res);
                }
            }
        i++;
        }
        cout << ans << endl;

        tc--;
    }

}
