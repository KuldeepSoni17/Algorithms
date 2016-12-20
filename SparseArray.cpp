#include<iostream>
using namespace std;
#define PRM 1009
int hashval(string s)
{
    long long hashvalu = 0;
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            hashvalu += (s[i]%(3*i+1))*3;
        }
        else
        {
            hashvalu += s[i]+7;
        }
    }
    return hashvalu%PRM;

}
int main()
{
    int n,q;
    cin >> n >> q;
    string str;
    string STRARR[1009] = {};
    int HASHARR[1009]={0};
    //for(int i=0;i<10;i++)
      //  cout << STRARR[i] << endl;
  //  cout << "CLEAR";
    for(int i=0;i<n;i++)
    {
        cin >> str;
        cout << hashval(str);
        if(STRARR[hashval(str)]==str)
        {
            HASHARR[hashval(str)]++;
        }
        else if(STRARR[hashval(str)]=="")
        {
            STRARR[hashval(str)] = str;
            HASHARR[hashval(str)] = 1;
        }

    }
    for(int i=0;i<q;i++)
    {
        cin >> str;
        cout << HASHARR[hashval(str)] << endl;
    }

    return 0;
}
