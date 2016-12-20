#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class teams
{   public:
    vector <long> str;

};
void fight(teams t1,teams t2,int y,int z)
{
    //vector<long> fir = t1.str;
    //vector<long> sec = t2.str;
    int t1size = t1.str.size();
    int t2size = t2.str.size();
    int t1top = t1.str.at(t1size-1);
    int t2top = t2.str.at(t2size-1);
    bool firturn=true;
    while(true)
    {
        if(firturn)
        {
          //sec.erase(sec.end()-fir.back()+1,sec.end());
          t2size -= t1top;

          //cout << t1size << " " << t2size << endl;
          //  cout << sec.size() << " " << fir.back() << endl;

        firturn = false;
        if(t2size==0)
            break;
        t2top = t2.str.at(t2size-1);
        }

        else
        {

            //fir.erase(fir.end()-sec.back()+1,fir.end());
            //cout << fir.size() << endl;
            t1size -= t2top;
            //cout << t1size << " " << t2size << endl;
            firturn = true;
            if(t1size==0)
            break;
            t1top = t1.str.at(t1size-1);



        }
    }
    firturn ? cout << z << endl : cout << y << endl;
}
int main()
{
    long n,k,q;
    cin >> n >> k >> q;
    teams team[k+1];
    bool played[k+1]={false};
    for(long i=0,x,y;i<n;i++)
    {
        cin >> x >> y;
        team[y].str.push_back(x);
    }
    for(long i=0,x,y,z;i<q;i++)
    {
    cin >> x >> y >> z;
    if(x==1)
    {
     team[z].str.push_back(y);
    }
    else
    {
        if(played[y]==false)
            {
            sort(team[y].str.begin(),team[y].str.end());
        played[y] = true;
        }

        if(played[z]==false)
            {
            sort(team[z].str.begin(),team[z].str.end());
        played[z] = true;
        }
        fight(team[y],team[z],y,z);
    }
    }

}
