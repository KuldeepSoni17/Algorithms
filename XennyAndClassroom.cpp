#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string s ;
    cin >> s;
    char cur,pre,top_stack;
    int stack_cnt,total;
    stack_cnt = 0;
    total = 0;
    pre = s[0];
    for(int i=1;i<s.length();i++)
    {   cout << i << endl ;
        cur = s[i];
        if(cur == pre)
        {
            cout << "IF" << endl;
            stack_cnt ++;
            top_stack = cur;
            cout << cur << " " << pre << " " << stack_cnt << " " << total << " " << top_stack << " " << endl;
        }
        else
        {
             if(stack_cnt == 0)
        {
            cout << "stack cnt = 0" << endl;
            pre = cur;
            top_stack = 'N';
            stack_cnt = 0;
            cout << cur << " " << pre << " " << stack_cnt << " " << total << " " << top_stack << " " << endl;
        }
        else{
            cout << "ELSE" << endl;

            total += stack_cnt;
            stack_cnt --;
            pre = top_stack;
            cout << cur << " " << pre << " " << stack_cnt << " " << total << " " << top_stack << " " << endl;
        }
        }


    }
    cout << total;
}
