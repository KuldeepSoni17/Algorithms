#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int N;
void setSTR(string ARR,string SRTARR,char x,char y)
{
    for(int m=N-1;m>0;m--)
    {
        if(ARR[m] == 'y')
        {
            ARR[m] = '^';
            break;
        }
    }
    for(int m=0;m<N;m++)
    {
        if('x' == SRTARR[m])
        {
            ARR[m] = '~';
            break;
        }
    }
}
int main()
{
    int K,f=0;
    cin >> N >> K;
    string ARR,SRTARR,STRG,PRNT;
    cin >> ARR;
    SRTARR = ARR;
    PRNT = ARR;
    sort(SRTARR.begin(),SRTARR.end());
    while(K>0)
    {
        if(K!=1)
        {   for(int i=0;i<N;i++)
            {   for(int j=0;j<N;j++)
                {
                    if(ARR[i]==SRTARR[j])
                    {
                        PRNT[i] = ARR[i];
                        ARR[i] = '^';
                        SRTARR[j] = '~';
                        break;
                    }
                    else if(ARR[i]>SRTARR[j])
                    {
                        K =K-2 ;
                        STRG[f] = ARR[i];
                        f++;
                        STRG[f] = SRTARR[j];
                        f++;
                        cout << "FUCK" << STRG << endl;
                        PRNT[i] = '^';
                        ARR[i] = '^';
                        SRTARR[j] = '~';
                        setSTR(ARR,SRTARR,ARR[i],SRTARR[j]);
                        break;
                    }
                }
            }
        }
        else
        {for(int j=0;j<N;j++)
        {
            for(int i=1;i<N;i+=2)
            {
             if(ARR[j]<STRG[i])
             {
                 PRNT[j]='^';
                 STRG[f]=ARR[j];
                 j = N;
                 break;
             }
            }
        }
        }
    }
sort(STRG.begin(),STRG.end());
cout << STRG << endl << ARR << endl << SRTARR << endl << PRNT << endl;
int j=0;
for(int i=0;i<N;i++)
{
    if(PRNT[i]=='^')
    {
        PRNT[i] = STRG[j];
        j++;
    }
}
cout << PRNT;
}
