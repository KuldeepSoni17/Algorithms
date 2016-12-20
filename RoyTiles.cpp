#include<algorithm>
#include<iostream>
#define MOD 1000000007
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while(tc)
 {
     int N,Q,X,A;
     long int P;
     cin >> N;
     long int *ARR,*RES;
     int *CNT;
     ARR = new long int[N];
     RES = new long int[N];
     CNT = new int[N];
     for(int i=0;i<N;i++)
     {
         cin >> ARR[i];
     }

     sort(ARR,ARR+N);
int j=0;
Q=1;
RES[0]=1;
CNT[0]=ARR[0];
for(int i=1;i<N;i++)
{
if(ARR[i]==CNT[j])
{
  RES[j]++;
}
else
{   Q++;
    j++;
    CNT[j] = ARR[i];
    RES[j]=1;
}
}

for(int k=0;k<Q;k++)
{
    ARR[k] = CNT[k];
    CNT[k] = 0;
}
sort(ARR,ARR+N);

for(int i=0;i<N-1;i++)
     {
         for(int j=0;j<N;j++)
         {
          cin >> P;
          for(int k=0;k<Q;k++)
          {
              if(P==ARR[k]+1)
              {
                  CNT[k]++;
                  break;
              }
          }
         }

         for(int k=0;k<Q;k++)
         {
             if(CNT[k]!=0)
             {
                 ARR[k]++;
                 RES[k]*=CNT[k];
                 CNT[k] = 0;
             }

         }

     }

     cin >> A;
    while(A)
    {
        cin >> P >> X;
        int flag = 0;
        for(int k=0;k<Q;k++)
        {
            if(X==ARR[k]+1 && P == X-N-1)
            {
                cout << RES[k]%MOD << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout << "0" << endl;
        }

        A--;
    }
     tc--;
 }
}
