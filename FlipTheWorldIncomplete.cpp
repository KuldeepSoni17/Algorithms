//SOLVE USING DYNAMIC MEMORY ALLOCATION

#include<iostream>
using namespace std;
int i,j;
int scan(char ARR[20][20],int N,int M)
{
    //cout << N << " " <<  M << endl;
    for(i=N-1;i>=0;i--)
    {
        for(j=M-1;j>=0;j--)
        {
            if(ARR[i][j]=='0')
            {
                /*for(int p=0;p<N;p++)
                    for(int q=0;q<M;q++)
            cout << ARR[p][q];*/

               // cout << i << "  " << j << endl;
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int tc,N,M;
    cin >> tc;
    while(tc)
    {

    cin >> N >> M;
    char ARR[20][20];
    int CNT = 0;
    for(int p=0;p<20;p++)
        {for(int q=0;q<20;q++)
            {ARR[p][q]='1';}
        }
    for(int p=0;p<N;p++)
        for(int q=0;q<M;q++)
            cin >> ARR[p][q];

    while(scan(ARR,N,M)==0)
    {
        for(int p=0;p<=i;p++)
        {
            for(int q=0;q<=j;q++)
            {   if(ARR[p][q]=='0')
                ARR[p][q] = '1';
                else
                    ARR[p][q]='0';
            }
        }
        CNT++;
    }
    cout << CNT << endl;
tc--;
}
return 0;
}

