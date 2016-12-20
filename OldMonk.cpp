#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int array[],int first,int last, int value);
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,RES;
        cin >> N;
        int *A,*B;
        A = new int[N];
        B = new int[N];
        tc--;
        for(int i=0;i<N;i++)
        {
            cin >> A[i];
        }
        for(int i=0;i<N;i++)
        {
            cin >> B[i];
        }
        RES = 0;
        int X;
        for(int i=0;i<N;i++)
        {
            X = 0;
            if(B[i]>=A[i])
            {
                   X = ((binary_search(B,i,N,A[i]))-i);
            }
            RES = max(RES,X);
        }
    cout << RES << endl;
    }
}


int binary_search(int array[],int first,int last, int search_key)
{
 int index;
 if (first > last)
 index = last;
 else
 {
 int mid = (first + last)/2;
 loop:
 if (search_key == array[mid])
     {
        if(search_key!=array[mid+1])
            {index = mid;}
            else
            {
                mid = mid+1;
                goto loop;
            }
     }
 else
{
 if (search_key > array[mid])
 index = binary_search(array,first, mid-1, search_key);
 else
 index = binary_search(array, mid+1, last, search_key);
}
 }
 return index;
 }
