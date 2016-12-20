#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int res=0,sum=0,way=0;
void trvrs(int i,int RDS[][34],int C[],int N,int sel[],int avl[]);
int main() {
        int N,M;
            cin >> N >> M;
    int C[N],sel[N],avl[N];
    int RDS[34][34];
    for(int i=0;i<N;i++)
        {
        cin >> C[i];
        sel[i] = 0;
        avl[i] = 1;
        for(int j=0;j<N;j++)
        RDS[i][j] = 0;
        }
    for(int i=0,x,y;i<M;i++)
        {
        cin >> x >> y;
        RDS[x-1][y-1] = 1;
        RDS[y-1][x-1] = 1;
        }
        for(int q=0;q<N;q++)
           {

           for(int p=0;p<N;p++)
         {

           cout << RDS[q][p] << " ";
         }
cout << endl;
}
    for(int i=0;i<N;i++)
        {
        cout << i+1 <<" ";
        sum = C[i];
        sel[i] = 1;
        avl[i] = 0;
        for(int j=0;j<N;j++)
            if(RDS[i][j] == 1){avl[j]=0;}
        trvrs(i,RDS,C,N,sel,avl);
        for(int q=0;q<N;q++)
        {
            sel[q] = 0;
            avl[q] = 1;
        }
        }
    cout << endl << res;
    return 0;
}
void trvrs(int i,int RDS[][34],int C[],int N,int sel[],int avl[])
    {
        cout << i+1 << endl;
        for(int j=0;j<N;j++)
        {
            if(RDS[i][j]==1 && sel[j]==0)
                {
                cout << "HEREMST" << endl;

                    if(avl[j]==1)
                    {
                                 sel[j] = 1;
                                 avl[j] = 0;
                                 trvrs(j,RDS,C,N,sel,avl);

                               sel[j] = 1;
                                avl[j] = 0;
                                cout << j+1 << " HERE" << endl;
                                sum+=C[j];
                                for(int k=0;k<N;k++)
                                 {
                                 if(RDS[j][k]==1)
                                 avl[k]=0;
                                 }
                                trvrs(j,RDS,C,N,sel,avl);
                     }

                    else
                    {
                        sel[j] = 1;
                    cout << j+1 <<" ALSO HERE" << endl;
                    trvrs(j,RDS,C,N,sel,avl);
                  //  sel[j] = 0;
                    }


                }
        }

    res = max(res,sum);
    cout << "SUM = " <<sum << endl ;

    }
