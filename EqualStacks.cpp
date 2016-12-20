#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
long int sizeA,sizeB,sizeC;
long long int hgtA=0,hgtB=0,hgtC=0;
stack<int> A,B,C;
void Bles();
void Cles();
void Ales()
{
    while(hgtA!=hgtB)
    {
        hgtB -= B.top();
        B.pop();
        if(hgtB<hgtA)
        {
            Bles();
        }
    }
    while(hgtA!=hgtC)
    {
        hgtC -= C.top();
        C.pop();
        if(hgtC<hgtA)
        {
            Cles();
        }
    }
    if(hgtA==hgtB && hgtA==hgtC)
    {
        cout << hgtA;
        exit(0);
    }
}
void Bles()
{
    while(hgtB!=hgtA)
    {
        hgtA -= A.top();
        A.pop();
        if(hgtA<hgtB)
        {
            Ales();
        }
    }
    while(hgtB!=hgtC)
    {
        hgtC -= C.top();
        C.pop();
        if(hgtC<hgtB)
        {
            Cles();
        }
    }
    if(hgtA==hgtB && hgtA==hgtC)
    {
        cout << hgtA;
        exit(0);
    }
}
void Cles()
{
        while(hgtC!=hgtB)
    {
        hgtB -= B.top();
        B.pop();
        if(hgtB<hgtC)
        {
            Bles();
        }
    }
    while(hgtC!=hgtA)
    {
        hgtA -= A.top();
        A.pop();
        if(hgtA<hgtC)
        {
            Ales();
        }
    }
    if(hgtA==hgtB && hgtA==hgtC)
    {
        cout << hgtA;
        exit(0);
    }
}
int main()
{
    cin >> sizeA >> sizeB >> sizeC;
    int ARR[100001];
    for(int i=0,x;i<sizeA;i++)
    {   cin >> ARR[i];
        hgtA += ARR[i];
    }
     for(int i=sizeA-1;i>=0;i--)
    {
        A.push(ARR[i]);
    }
    for(int i=0,x;i<sizeB;i++)
    {   cin >> ARR[i];
    hgtB += ARR[i];
    }
     for(int i=sizeB-1;i>=0;i--)
    {
        B.push(ARR[i]);
    }
    for(int i=0,x;i<sizeC;i++)
    {   cin >> ARR[i];
    hgtC += ARR[i];
    }
     for(int i=sizeC-1;i>=0;i--)
    {
        C.push(ARR[i]);
    }
    if(hgtA==hgtB && hgtA==hgtC)
    {
        cout << hgtA;
    }
    else
    {
        if((hgtA)<(hgtB))
        {
            if((hgtA)<(hgtC))
            {
                //cout << "ALES";
                Ales();
            }
            else
            {
              //  cout << "CLES";
                Cles();
            }
        }
        else
        {
            if((hgtB)<(hgtC))
            {
            //    cout << "BLES";
                Bles();
            }
            else
            {
                //cout << "CLES";
                Cles();
            }
        }
    }


}
