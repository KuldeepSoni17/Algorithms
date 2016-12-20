#include<iostream>
using namespace std;
int main()
{
    int N;
    long int D,cst;
    cin << N << D;
    int W[N][3];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin << W[i][j];
        }
    }

    return 0;
}
