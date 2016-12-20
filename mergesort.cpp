#include <iostream>
using namespace std;
#include <conio.h>
int inv=0;
void merge(int *,int, int , int );
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[1000];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
            inv += (mid-i) + 1;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;

    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
int main()
{
    int a[1000], i, b[20];
    cout<<"enter  the elements\n";
    for (i = 0; i < 998; i++)
    {
        cin>>a[i];
    }
    mergesort(a, 0, 997);
    cout<<"sorted array\n";
    for (i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
    cout << endl << inv << endl;
    inv = 0;
    cout<<"enter  the elements\n";
    for (i = 0; i < 5; i++)
    {
        cin>>b[i];
    }
    mergesort(b, 0, 4);
    cout<<"sorted array\n";
    for (i = 0; i < 5; i++)
    {
        cout<<b[i];
    }
    cout << endl << inv << endl;
    getch();
}
