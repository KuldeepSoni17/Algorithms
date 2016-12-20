#include<iostream>
using namespace std;
bool  flag = false;
void scan(long int i,long long int ARR[],long int j)
{
    if(i>j)
    {
        flag = false;
        for(long int k=i;k>=0;k--)
            {
             if(ARR[k]>ARR[i])
             {
                 flag = true;
                 return ;
             }
            }
    }
    else
    {
        flag = false;
        //cout << "HERE" << endl;
        for(long int k=i;k<=j;k++)
            {
            //cout << "HERE" << endl;
             if(ARR[k]>ARR[i])
             {
                 flag = true;
                 return ;
             }
            }
    }
}
int main()
{
    long int N;
    cin >> N;
    long long int ARR[N];
    for(long int i=0;i<N;i++)
    {
        cin >> ARR[i];
    }
    for(long int i=0;i<N;i++)
    {
        if(i==0 || i==(N-1))
        {
            cout << i+1 << " ";
        }
        else
        {   flag = false;
            scan(i,ARR,0);
if(flag==false)
            {
                cout << i+1 << " ";
            }

            else
            {
            scan(i,ARR,(N-1));
            if(flag==false)
            {
                cout << i+1 << " ";
            }
            }




        }
    }
}
