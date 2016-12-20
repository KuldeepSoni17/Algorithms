#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int ARR[n];
    for(int i=0;i<n;i++)
        {cin >> ARR[i];}
    int q;
    cin >> q;
    for(;q>0;q--)
        {
        int x,y;
        cin >> x >> y;
        if(x>y)
            {
         cout << "Odd" << endl;   
        }
        else
            {
            if(ARR[x-1]%2==0)
                if( x<n && ARR[x]!=0)
                    cout << "Even" << endl;
                else
                    cout << "Odd" << endl;
            else
                cout << "Odd" << endl;
        }
    }
    return 0;
}
