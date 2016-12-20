#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        long int N[4],k,tmp;
        for(long int i=0;i<4;i++)
        {
            cin >> N[i];
        }
        cin >> k;
        tmp = k/N[0];
        long int t = cbrt(tmp);
        int flag = 0;
        while(flag==0)
        {
        if(N[0]*t*t*t+N[1]*t*t+N[2]*t+N[3]>k)
        {
         t = t-1;
        }
        else
        {
            flag = 1;

        }
        }
        cout << t << endl;
        tc--;
    }
}
