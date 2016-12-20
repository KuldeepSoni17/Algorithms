#include<iostream>
#include<math.h>
using namespace std;
long long int boy(long long int x)
{
    return (x-1)*(x+1) + (x+1)*2;
}
long long int girl(long long int x)
{
    return (x)*(x+2);
}
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        long long int N,Y;
        cin >> N;
        Y = sqrt(N);
        cout << Y << " " << N << endl;
        Y = Y-2;
        if(Y==0)
        {
            cout << "0 0" << endl;
        }
        else{
        if(Y%2!=0)
        {
            Y++;
        }
        while(Y>0)
        {
            if(girl(Y)+boy(Y+1)<=N)
            {  cout << Y+1 << " " << Y << endl;
                break;
            }
            else if(girl(Y)+boy(Y-1)<=N)
            {
                cout << Y-1 << " " << Y << endl;
                break;
            }
            else
            {
                Y = Y-2;
                if(Y==0)
                    {
                    cout << "0 0" << endl;
                    break;
                    }

            }
        }
        }

        tc--;

    }
}
