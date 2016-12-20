
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
    long N;
    cin >> N;
    string s;
    cin >> s;
    long grl=0,boy=0;
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            if(s[i] == 'G' )
                boy++;
            if(s[i]=='B')
                grl++;
        }
        else
        {
         if(s[i] == 'B' )
            boy++;
         if(s[i] == 'G' )
            grl++;
        }
    }
    cout << min((boy/2),(grl/2)) endl;
    tc--;

    }

}
