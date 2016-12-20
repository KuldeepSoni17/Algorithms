/*Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of edits (operations) required to convert ‘str1′ into ‘str2′.

Insert
Remove
Replace
All of the above operations are of equal cost.*/

//KULDEEP.

#include <iostream>
#include <algorithm>
//#include <string.h>
#include <string>
using namespace std;
int main()
{
    string a,b;
    cin >> a;
    cin >> b;
    bool flag = false;
    int i=0;
    int cnt=0;
    cout << a.length();
    while(flag)
    {
        if(a.length()>=b.length())
        {
            if(i<=b.length())
            {
                if(a[i]!=b[i])
                {
                cnt++;
                i++;
                }
            }
            else
            {
                cnt += a.length()-i;
                flag = true;
            }
        }
        else
        {

        }

    }

cout << cnt;
}
