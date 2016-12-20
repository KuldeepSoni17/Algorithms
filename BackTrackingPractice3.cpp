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
using namespace std;

void permute(int ARR[],int N,int K,int ARR2[])
{
    if(K==N)
    {
        for(int i=0;i<N;i++)
        {
            cout << ARR2[i]<< " ";
        }
        cout << endl;
    }
    else
    {
        for(int i=0;i<N;i++)
        {
            ARR2[K] = ARR[i];
            permute(ARR,N,K+1,ARR2);

        }


    }
}
int main()
{
    int N;
    cin >> N;
    int ARR[N];
    int ARR2[N];
    for(int i=0;i<N;i++)
    {
     cin >> ARR[i];
    }
    permute(ARR,N,0,ARR2);
}
