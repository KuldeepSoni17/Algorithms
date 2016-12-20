
/*
Kevin has a sequence of integers a1, a2, ..., an. Define the strength of the sequence to be

|a1 - a2| + |a2 - a3| + ... + |an-1 - an| + |an - a1|.

Kevin wants to make his sequence stronger, so he reorders his sequence into a new sequence b1, b2, ..., bn. He wants this new sequence to be as strong as possible. What is the largest possible strength of the resulting sequence?

Input

The input consists of 2 lines. The first line has a positive integer n. The second line contains the n integers a1, a2, ..., an.

Output

Output a single integer: the maximum possible strength.
*/

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int z = 0;
void permute(int ARR[],int N,int K,int k)
{
    if(K==N)
    {
        int sum = 0;
        cout << ARR[0]<< " ";
        for(int i=1;i<N;i++)
        {
            cout << ARR[i]<< " ";
            sum += abs(ARR[i]-ARR[i-1]);
        }
        sum += abs(ARR[N-1]-ARR[0]);
        cout << "SUM = " << sum <<endl;
    }
    else
    {
        for(int j=k;j<N;j++)
        {
            if(ARR[0] == z)
            {
            swap(ARR[k],ARR[j]);
            permute(ARR,N,K+1,k+1);
            swap(ARR[j],ARR[k]);
            }
            else
            {
                break;
            }
        }
    }
}
int main()
{
    int N;
    cin >> N;
    int ARR[N];
    for(int i=0;i<N;i++)
    {
     cin >> ARR[i];
    }
    //sort(ARR,ARR+N);
    z = ARR[0];
        permute(ARR,N,0,0);



}
