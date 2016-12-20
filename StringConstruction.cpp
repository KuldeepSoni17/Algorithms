#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string str;
        cin >> str;
       // cout << "HERe";
        long len = str.length(),ans=0;
       // cout << "HERe";
        vector< vector<int> > alpha(26);
       // cout << "HERe";
        long i=0;
        while(i<len)
        {
            int c = str[i]-'a';
            if(alpha[c].size()==0)
            {
                ans++;
                alpha[c].push_back(i);
                i++;
            }
            else
            {
                bool fnd = false;
                for(long k=0;k<alpha[c].size();k++)
                {
                    if(str.substr(0,alpha[c][k]+1)==str.substr(i-alpha[c][k],alpha[c][k]+1))
                    {
                        fnd = true;
                        i++;
                        break;
                    }
                }
                if(fnd==false)
                {
                    ans++;
                    alpha[c].push_back(i);
                    i++;
                }
            }

        }
        cout << ans << endl;




    }
}
