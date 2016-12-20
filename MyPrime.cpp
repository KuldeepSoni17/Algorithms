#include<iostream>
using namespace std;

int main()
{
    int N;
    vector<int> v;
    cin >> N;
    int ARR[N],flag;
    for(int i=0;i<N;i++)
    {
        cin >> v[i];
    }
    for(int i=0;i<N;i++)
    {
        flag=1;
        for(int j=0;j<N;j++)
        {
            if(ARR[i]%ARR[j]==0 && ARR[i] != ARR[j])
            {
                flag = 0;
                break;

            }
        }
        if(flag == 1)
        {
            cout << ARR[i] << " ";
        }

    }

}
