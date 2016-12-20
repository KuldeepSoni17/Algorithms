#include<iostream>
using namespace std;
int main()
{
    int N,*ARR,CNT,sum,len;
    cin >> N;
    ARR = new int[N];
    for(int i=0;i<N;i++)
    {
     cin >> ARR[i];
    }
    CNT = 1;
    sum = 0;
    len = -1;
    for(int i=0;i<N;i++)
    {   if(len>N-i)
        {
            break;
        }
        sum = 0;
        for(int j=i;j<N;j++)
        {
            sum += ARR[j];
            if(sum>=0)
            {
                if(len==j-i+1)
                {
                    CNT++;
                }
               len = max(len,j-i+1);
            }
        }
    }
    cout << len << " " << CNT;
}
