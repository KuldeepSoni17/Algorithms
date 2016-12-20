#include<iostream>
#include<map>
using namespace std;
map<pair<int,int>, int> mp;

void plotGrid(string s) {
    int len = s.length();
    int x = 0, y = 0;

    for(int i = 0; i < len ; i++) {
        if(s[i] == 'R')
            x++;
        else if(s[i] == 'L')
            x--;
        else if(s[i] == 'U')
            y++;
        else
            y--;

        mp[{x,y}] = 1;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;


    }
}
