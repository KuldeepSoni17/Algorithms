#include<iostream>
using namespace std;
int N,M,i,j;
int scan(int ARR[][5])
{
    for(i=N;i>0;i--)
    {
        for(j=M;j>0;j--)
        {
            if(ARR[i][j]==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
int tc;
cin >> tc;
cin >> N >> M;
int ARR[][5];
while(tc)
{
    while(scan(ARR)==0)
    {
        for(int p=0;p<i;i++)
        {
            for(int q=0;q<j;q++)
            {
                if(ARR[p][q]==1)
                    ARR[p][q] = 0;
                else
                    ARR[p][q] = 1;
            }
        }
    }
    tc--;
}

}
