#include<iostream>
using namespace std;
#define PRM 1009
int hashval(string s)
{   long long hashvalu = 0;
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
struct hashv
{
    string val="";
    int num=0;
    struct hashv *next=NULL;
};
int main()
{
    int n;
    cin >> n;
    hashv arr[1009];
    string str;
    for(int i=0;i<n;i++)
    {   cin >> str;
        //cout << endl << hashval(str) << " " << arr[hashval(str)].val << " ";
        hashv *itr = &arr[hashval(str)];
        //cout << itr->val ;
        while(true)
        {   //cout << "  PROBLEMHERE  " ;
            if(itr->val==str)
            { //cout << " PROBLEMINHERE " ;
                itr->num++;
                break;
            }
            else if(itr->val=="")
            {//cout << "PROBLEMININHERE" ;
                itr->val = str;
                itr->num = 1;
                break;
            }
            else if(itr->next==NULL)
            {
              // cout << newone.val;
               itr->next = new hashv;
               itr = itr->next;
               itr->val = str;
               itr->num = 1;
               itr->next=NULL;
               //cout << "PROBLEM" ;
               break;
            }
            else
            {
                itr = itr->next;
         //       cout << "PROBLEMSOLVED" ;
            }
        }

    }

     int q;
     cin >> q;
     for(int i=0;i<q;i++)
     {
         cin >> str;
         //cout << endl << hashval(str) << endl;
        hashv *itr = &arr[hashval(str)];
         while(true)
         {
             if(itr->val==str)
             {
                 cout << itr->num << endl;
                 break;
             }
             else if(itr->val=="")
             {
                cout << "0" << endl;
                 break;
             }
             else if(itr->next==NULL)
             {
                 cout << "SURE0" << endl;
                 break;
             }
             else
             {
                 //cout << "HEREBABE";
                 itr = itr->next;
             }
         }
     }
return 0;
}

