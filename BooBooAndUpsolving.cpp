#include<iostream>
#include<algorithm>
using namespace std;



int main()
{
    long N,K;
    cin >> N >> K;
    long long ARR[N];
    long long sum=0;
    for(long i=0;i<N;i++)
    {
        cin >> ARR[i];
        sum += ARR[i];
    }
    sort(ARR,ARR+N);
    long long x = N-1;
    cout << sum << endl;
    int i;
    while(K!=1)
    {
        long long target = sum/K;
        long long curr = ARR[x];
        if(target > curr)
        {
            for(i=0;i<x;i++)
            {
                if(curr+ARR[i]>target)
                {
                    break;
                }
            }
            cout << ARR[i-1] << endl;
            K--;
            // If not found, start adding with smallest number.
        }
        else
        {
            sum -= ARR[x];
            cout << ARR[x] << " " << sum << endl;
            ARR[x] = 0;
            K--;
            x = x-1;
        }
    }
    cout << sum << endl;

}

long long iteration(long long ARR, long long target, long long curr)
{
    int i;
            for(i=0;i<x;i++)
            {
                if(curr+ARR[i]>target)
                {
                    break;
                }
            }

            return ARR[i];
}
