#include<iostream>
#include<stdlib.h>
using namespace std;
int k=0;
long long int res=999999999,sum=0;
int NUM[20]={0};
void calc(long long int i,int N,long long int SUM[20][20])
{
    if(sum>res)
    {
        return;
    }
    else
    {
       for(int j=0;j<N;j++)
       {
           if(NUM[j]==1)
           {
               continue;
           }
           k++;
           NUM[j] = 1;
           sum += SUM[j][k];
           calc(i,N,SUM);
           sum -= SUM[j][k];
           NUM[j] = 0;
           k--;
        }
        res = min(res,sum);
        cout << res << " " << sum << endl;
    }

}
int main()
{
    int N;
    cin >> N;
    long long int ARR[N][2],SUM[20][20];
    long long int x,y;
    for(int i=0;i<N;i++)
    {
        cin >> ARR[i][0] >> ARR[i][1];
    }
    for(int i=0;i<N;i++)
    {
        cin >> x >> y;
        for(int j=0;j<N;j++)
        SUM[i][j] = abs(ARR[j][0]-x) + abs(ARR[j][1]-y);
    }
    for(int i=0;i<N;i++)
        {for(int j=0;j<N;j++)
        {cout << SUM[i][j] << " ";
        }
            cout << endl;
        }

        for(int i=0;i<N;i++)
        {   k=0;
            sum = SUM[i][0];
           cout << SUM[i][0] << "INTOMAIN" << endl;
           NUM[i] = 1;
           calc(i,N,SUM);
           NUM[i] = 0;
        }

}
