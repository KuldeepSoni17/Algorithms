#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        long int N[3],k,tmp,t;
        for(long int i=0;i<3;i++)
        {
            cin >> N[i];
        }
        cin >> k;
        k = k - N[2];
        if(k<=0)
        {
            t = 0;
        }
        else{
        tmp = k/N[0];
        t = sqrt(tmp);
        int flag = 0;
        while(flag==0)
        {
        if(N[0]*t*t+N[1]*t<k)
        {
         t = t+1;
        }
        else if(N[0]*(t-1)*(t-1)+N[1]*(t-1)>=k)
        {
         t = t-1;
        }
        else
        {
            flag = 1;
        }
        }
        }
        cout << t << endl;
        tc--;
    }
}

