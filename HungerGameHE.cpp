#include<iostream>
#include<algorithm>
using namespace std;
int MAX(int x,int y,int z)
{
    if(abs(x-z)>abs(y-z))
        return abs(x-z);
    else
        return abs(y-z);
}
int COM(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int N,mxm;
    cin >> N;
    int ARR[N];
    for(int i=0;i<N;i++)
    {
        cin >> ARR[i];
    }
std::sort(ARR,ARR+N);
    for(int i=0;i<N;i++)
    {
        if(i==0)
        {
        mxm = MAX(ARR[i+1],ARR[i+2],ARR[i]);
        //cout << mxm << endl;
        }
        else if(i==N-1)
        {
            mxm=COM(MAX(ARR[i-1],ARR[i-2],ARR[i]),mxm);
          //   cout << mxm << endl;
        }
        else
        {
            if((i-2)<0)
            {
            if((i+2)>N-1)
            {mxm = COM(mxm,MAX(ARR[0],ARR[N-1],ARR[i]));}
            else
            {mxm = COM(MAX(ARR[0],ARR[i+2],ARR[i]),mxm);}
            }
            else
            {if((i+2)>N-1)
            {mxm = COM(mxm,MAX(ARR[i-2],ARR[N-1],ARR[i]));}
            else
            {mxm = COM(MAX(ARR[i-2],ARR[i+2],ARR[i]),mxm);}
            }

        }

    }
    cout << mxm;
    return 0;
    }

