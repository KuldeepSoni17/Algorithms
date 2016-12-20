#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while(N)
    {
        char a;
        int cnt=0,qwe,vow=0,cons=0;
        string s;
        cin >> s;
            for(int i=0;i<s.length();i++)
            {
                a = s[i];
            if(a=='a' || a=='u' || a=='o' || a=='i' || a=='e' || a=='y')
            {if(cnt!=3)
            {
                cnt = 0;
            }
                vow++;
            }
            else
            {
                cons++;
                cnt++;
            }
            }
        if(cnt<3 && vow>=cons)
        {
            cout << "easy" << endl;
        }
        else{cout << "hard" << endl;}
        N--;
    }
}
