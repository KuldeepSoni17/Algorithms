#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    int n = a;
    //printf("0x%x\n",n);
    cout << showbase <<setbase(16) << n <<  endl;
    cout << setfill('-')<< showpos <<setw(15) << setprecision(2)<< b << endl;
    cout << scientific <<setprecision(9) << c << endl;
}
