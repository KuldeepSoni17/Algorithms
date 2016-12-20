#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc>0)
    {
        string s;
        cin >> s;
        bool flag = false;
        int len = s.length();
        int i;
        char y,x = s[len-1];
        for(i=len-2;i>=0;i--)
        {
            if(x>s[i])
            {   //cout << i << " " << x << endl;
                   flag = true;
                break;
            }
            else
            {
                x = s[i];
            }
        }
        if(flag == false)
        {
            cout << "no answer" << endl;
        }
        else
        {   y = 'z';
            int pos = i+1;
            for(int j=i+1;j<len-1;j++)
            {
                if(s[j]<y && s[j]>s[i])
                {
                    //cout << j << " " << s[j] << endl;
                    y = s[j];
                    pos = j;
                }
            }
            swap(s[pos],s[i]);
            sort(s.begin()+i+1,s.end());
            cout << s<<endl;
        }

        tc--;
    }
}
