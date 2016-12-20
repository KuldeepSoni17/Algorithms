#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
 int tc;
 char x;
 cin >> tc;
// cin >> x;
// cout << x << "X";
 while(tc)
 {
 	char A[26];
 	char B[26];
 	string str;
 	int flag = 0;
 	int sum = 0;
 	for(int i=0;i<26;i++)
 	{
 		A[i] = '0';
 		B[i] = '0';
 	}
 	cin >> str;
 	for(int i=0;i<str.length();i++)
 	{
 		x = str[i];
 		if(A[97-x] != 1)
        {
            A[97-x] = 1;
            sum ++;
        }
 		if(sum==26)
        {
            break;
        }


 	}
 	cin >> str;

 	for(int i=0;i<str.length();i++)
 	{
 		x = str[i];
 		B[97-x] = 1;
 		if(A[97-x]==1)
 		{
 			flag = 1;
 			break;
 		}

 	}
 	if(flag==1)
 	{
 		cout << "Yes" << endl;

 	}
 	else
 	{
 		cout << "No" << endl;
 	}
 	tc--;
 }
}
