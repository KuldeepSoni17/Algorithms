#include<iostream>
using namespace std;
int main()
{
   int T;
   cin >> T;
   int N[T];
   for(int i=0;i<T;i++)
   {
       cin >> N[i];
   }
   int q;
   cin >> q;
   for(int i=0;i<q;i++)
   {
       int t;
       cin >> t;
       int j = 0;
       do
       {
           t = t-N[j];
           if(t<=0)
            break;
           j++;
        }
       while(t>0 && j<T);
       if(j==T)
           {
               cout << "-1" << endl;
           }
           else
       cout << j+1 << endl;
   }
}
