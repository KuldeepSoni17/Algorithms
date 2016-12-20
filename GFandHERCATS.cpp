#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    long int tc;
    cin >> tc;
    while(tc)
    {
    	long int n;
    	cin >> n;
    	long int s[n],c[n];
    	long long int res;
    	for(long int i=0;i<n;i++)
    	{
    		cin >> s[i];
    	}
    	for(long int i=0;i<n;i++)
    	{
    		cin >> c[i];
    	}
    	sort(s,s+n,std::greater<int>());
    	sort(c,c+n,std::greater<int>());
    	res = 0;
    	for(long int i=0;i<n;i++)
    	{
    		res = res + c[i]*s[i];
    	}
    	cout << res << endl;
    	tc--;
    }
    return 0;
}

