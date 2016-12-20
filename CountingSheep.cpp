#include<iostream>
using namespace std;
int main()
{
    int tc,k=1;
    cin >> tc;
    while(tc)
    {
        int N,flag=0,cnt[10],x,i,j=1;
        for(int i=0;i<10;i++)
        {
            cnt[i] = 10;
        }
        cin >> N;
        x = N;
        if(N==0)
        {
            cout << "Case #" << k++ << ": " << "INSOMNIA" << endl;
        }
        else
        {
            while(flag!=10)
            {
                do
                {
                    i = x%10;
                    x = x/10;
                    if(cnt[i]==10)
                    {cnt[i] = i;
                    flag++;}
                }while(x!=0);
                j++;
                x = j*N;

            }
        cout << "Case #" << k++ << ": " <<x-N  << endl;
        }

        tc--;
    }
cin >> k;
}
