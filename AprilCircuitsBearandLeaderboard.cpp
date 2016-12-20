#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int array[],int first,int last, int value);
int main()
{
    int N,Q,sum,P,scr;
    cin >> N>>Q;
    int *ARR;
    ARR = new int[N];
    int *RNK;
    RNK = new int[N];
    for(int i=0;i<N;i++)
    {
        RNK[i] = 0;
        ARR[i] = 0;
    }
    sum = 0;
    cin >> P >>scr;
    sum += scr;
    RNK[0] = scr;
    ARR[P-1] = scr;
    for(int i=1;i<Q;i++)
    {   cin >> P >> scr;
        ARR[P-1] += scr;
        int j = binary_search(RNK,0,i,ARR[P-1]);
        if(RNK[j]==ARR[P-1])
        {   cout << ARR[P-1] << " " << j+1 << endl;
            sum+=ARR[P-1]*(j+1);
        }
        else
        {
            cout << ARR[P-1] << " " << j+1 << endl;
            RNK[j] = ARR[P-1];
            sum+=ARR[P-1]*(j+1);
        }
        cout << sum << endl;
    }
}

int binary_search(int array[],int first,int last, int search_key)
{
 int index;
 if (first > last)
 index = first;
 else
 {
 int mid = (first + last)/2;
 if (search_key == array[mid])
     {
        index = mid;
     }
 else
{
 if (search_key > array[mid])
 index = binary_search(array,first, mid-1, search_key);
 else
 index = binary_search(array, mid+1, last, search_key);
}
 }
 cout << first << " " << last << " " << index << endl;
 return index;
 }
