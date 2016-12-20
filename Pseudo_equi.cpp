#include<iostream>
using namespace std;
int main()
{
    int n=0;
    for(int i=0;i<10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            for(int k=0;k<=i;k++)
            {
                for(int l=0;l<=i;l++)
                {
                    if(i*i == k*k+j*j+l*l)
                {
                    n++;
                    cout << i << " " << j << " " << k << " " << l << endl;
                }
                }
            }
        }
    }
cout << n;
}
