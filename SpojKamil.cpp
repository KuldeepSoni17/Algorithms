#include <iostream>
using namespace std;

int main() {

	int x=1;
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++)
		if(s[i]=='T' || s[i]=='F' || s[i]=='L' ||  s[i]=='D')
		x*=2;

	cout << x;
	return 0;
}
