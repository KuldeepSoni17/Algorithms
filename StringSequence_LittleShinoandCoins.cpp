#include<iostream>
using namespace std;
long long cnt=0;
int K,len;
string str;
void substring(int p,int q)
{   char distarr[3];
    distarr[0] = str[p];
    int dist = 1,i;
    bool nodist = false;
    for(i=p;i<=q;i++)
    {
        nodist = false;
        for(int j=0;j<dist;j++)
        {
            if(str[i]==distarr[j])
            {   //cout << "EQUAL" << " " << str[i] << " " << distarr[j] << endl;
                nodist = true;
            }
        }
        if(nodist==false)
        {   //cout << "ALSOHEREBABEYES" << endl;
            distarr[dist++] = str[i];
        }
    if(dist==K)
    {
        cnt++;
    }

    else if(dist>K)
    {
       // cout << p << " " << i <<" DISTGRT " << endl;
        break;
    }

    }
    if(p+1<=q)
    substring(p+1,q);
    }



int main()
{
    cin >> K;
    cin >> str;
    len = str.length();
    substring(0,len-1);
    cout << cnt ;
}
