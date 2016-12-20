#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,*ARR;
        long int sum=0;
        cin >> N;
        ARR = new int[N];
        for(int i=0;i<N;i++)
        {
            cin >> ARR[i];
        }
        sort(ARR,ARR+N);
        for(int i=0;i<N;i=i+2)
        {
            sum += ARR[i]*ARR[i+1];
        }
        cout << sum << endl;
    tc--;
    }
}
