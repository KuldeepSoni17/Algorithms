// Binary Search

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N,Q,x;
    cin >> N >> Q;
    int *ARR;
    ARR = new int[N];
    for(int i=0;i<N;i++)
    {
        cin >> ARR[i];
    }
    sort(ARR,ARR+N);
    for(int i=0;i<Q;i++)
    {
        cin >> x;
        if(binary_search(ARR,ARR+N,x))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
