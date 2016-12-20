#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,i=0;
        cin >> N;
        while(N>0)
        {int x;
        cin >> x;
            if(x%2!=0)
            {i++;}
            N--;
        }
        if(i%2==0)
            cout << "Yes\n";
        else
            cout << "No\n";
tc--;
    }
    return 0;
}
