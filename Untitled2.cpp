#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long N,MAXI=0;
    cin >> N;
    int ARR[1000001];
    for(long i=0,x;i<N;i++)
        {
        cin >> x;
//        ARR[x]++;
        MAXI = max(MAXI,x);
    }
  //  cout << ARR[MAXI] ;
    return 0;
}

