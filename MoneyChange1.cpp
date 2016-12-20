#include<iostream>
using namespace std;
int *W = new int [10];
int *S = new int [10];
int N,K;
void manip(int j,int mida);
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {

        cin >> N >> K;
        for(int i=0;i<K;i++)
        {
            cin >> W[i];
        }
        for(int i=0;i<N;i++)
        {
            cin >> S[i];
        }

        int mida;
        for(int i=0;i<N;i++){
                if(S[i]>=W[K-1])
                {
                    mida = K-1;
                }
                else if(S[i]<=W[0])
                {
                    mida = 0;
                }
                else{

        int strta = 0,enda=K,flag=1;
        while(flag!=0)
        {   mida = (strta+enda)/2;
            if(W[mida]<=S[i] && W[mida+1]>=S[i])
            {
                flag = 0;
            }
            else
            {
                if(W[mida]<=S[i] && W[mida+1]<=S[i])
             strta = mida;
             else
             enda = mida+1;
            }
        }

                    }
                cout << mida << endl;

        for(int j=mida;j>=0;j--)
        {
           manip(S[i],j);
        }
        }





        tc--;
}
}
void manip(int j,int mida)
{   cout << j << endl;
    j = j - W[mida];
    cout << j << endl;
        for(int i=0;i<N;i++){
                if(j>=W[K-1])
                {
                    mida = K-1;
                }
                else if(j<=W[0])
                {

                    mida = 0;
                }
                else{

        int strta = 0,enda=K,flag=1;
        while(flag!=0)
        {   mida = (strta+enda)/2;
            if(W[mida]<=j && W[mida+1]>=j)
            {
                flag = 0;
            }
            else
            {
                if(W[mida]<=j && W[mida+1]<=j)
             strta = mida;
             else
             enda = mida+1;
            }
        }

                }
                cout << mida << endl;

        }


}
