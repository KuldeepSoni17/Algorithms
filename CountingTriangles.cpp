#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int ARR[N][3],inp[3];
    for(int i=0;i<N;i++)
    {
    for(int j=0;j<3;j++)
    {
    cin >> inp[j];
    }
    sort(inp,inp+3);
    for(int k=0;k<3;k++)
    {
        ARR[i][k] = inp[k];
    }
    }


}

