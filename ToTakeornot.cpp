//A BIT OF IMPROVIZATION IS NEEDED

#include<iostream>
#define macro(a,b,c) {a = a b c;}
using namespace std;
int enrg = 1;
int res = 1;

void implem(int b,char ARR[][2],int i)
{

    for(int j=i;j<b;j++)
    {
        int a = enrg;
        if(ARR[i][0]=='N')
        {
            enrg = -enrg;
        }
        else
        {
            (ARR[i][0]=='+' && (macro(enrg,+,(ARR[i][1]-48)))) || (ARR[i][0]=='*' && (macro(enrg,*,(ARR[i][1]-48)))) || (ARR[i][0]=='-' && (macro(enrg,-,(ARR[i][1]-48))));
        }
        res = max(res,enrg);
        //cout << res << " " << enrg << endl;
        implem(b,ARR,j+1);
        enrg = a;

    }
}
int main()
{
    int tc;
    cin >> tc;
    while(tc>0)
    {
        int b;
        enrg = 1;
        res = 1;
        bool IsN = false;
        cin >> b;
        char ARR[b][2];
        for(int i=0;i<b;i++)
        {
            cin >> ARR[i][0];
            if(ARR[i][0] != 'N')
                cin >> ARR[i][1];
            else
                IsN = true;
        }
        if(IsN)
        for(int i=0;i<b;i++)
            {   //cout << i;
                implem(b,ARR,i);
            }
        else
        {
          for(int i=0;i<b;i++)
        {
          if((ARR[i][0]=='+' && (macro(enrg,+,(ARR[i][1]-48)))) || (ARR[i][0]=='*' && (macro(enrg,*,(ARR[i][1]-48)))))
          {
              res = enrg;
          }
        }
        }
        cout << res << endl;
        tc--;
    }

}
