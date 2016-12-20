#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        long long int N,X,Y;
        cin >> N >> X >> Y;
        long long int ini[N],fnl[N];
        for(int i=0;i<N;i++)
        {
            cin >> ini[i] >> fnl[i];
        }
        sort(ini,ini+N);
        sort(fnl,fnl+N);
       long long int k=0;
        for(long long int i=0;i<N;i++)
        {
            for(long long int j=0;j<N;j++)
            {
                if(fnl[i]==ini[j])
                {
                    ini[j]=0;
                    fnl[i]=0;
                    k++;
                }
                if(fnl[i]<ini[j])
                {
                    break;
                }
            }
        }
       long long int RES = 0;
        for(;k<N;k++)
        {
            if(ini[k]<fnl[k])
                {RES = RES+abs((ini[k]-fnl[k]))*X;
                //cout << ini[k]<<"---"<<fnl[k]<< "   " <<RES <<endl;
                }
            else
                {RES = RES+abs((fnl[k]-ini[k]))*Y;
                //cout << ini[k]<<"---"<<fnl[k]<<endl;
                }
        }
        cout << RES << endl;
        tc--;
    }
    return 0;
}
