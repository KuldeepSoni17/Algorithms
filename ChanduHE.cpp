#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        tc--;
        char *str = new char;
        cin >> str;
        cout << str[0];
        for(int i=1;i<strlen(str);i++)
        {
            if(str[i] != str[i-1])
            {
                cout<<str[i];
            }
        }
        cout << endl;

    }
return 0;}
