#include<algorithm>
#include<iomanip>
#include<iostream>
using namespace std;
int cost[99];
int mat[101][101];
int ans;
int tot;
int N;
int z[100];
int zs,zn;
void manip(int x);
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {   zs=0;zn=0;
        ans = 0;
        cin >> N;
        int x,k,y;

        for(int i=0;i<N;i++)//Intialising mat[][]
        {   mat[i][N] = 0;
            for(int j=0;j<N;j++)
            {
                mat[i][j] = -1;
            }
        }


        for(int i=0;i<N-1;i++)//input cost
        {
            cin >> cost[i];
        }
        sort(cost,cost+N-1);
        for(int i=0;i<N-1;i++)//input mat
        {
            cin >> x >> y;
            mat[x-1][y-1] = 0;
            mat[x-1][N]++;
            mat[y-1][x-1] = 0;
            mat[y-1][N]++;
            tot++;
        }
        while(tot)
        {
            int k;
            x=0;
            k = mat[x][N];
            for(int i=0;i<N;i++)
            {
                if(mat[i][N]>=k)
                {
                    k = mat[i][N];
                    x = i;
                }
            }
            while(mat[x][N]>0)
            {
                cout <<"x-" << x << endl;
                manip(x);
            }
            for(int i=0;i<zs;i++)
            {
                if(mat[z[i]][N]!=0)
                {
                    cout << z[i] << endl;
                    manip(z[i]);
                }
                cout << z[i] << "qw" << endl;
            }









        }

        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N+1;j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        tc--;
    cout << ans << endl;
    }
}

void manip(int x)
{
    int y,k,s,flag;

            y=0;
            k = mat[y][N];
            flag = 0;
            restart:
            for(int i=0;i<N;i++)
            {
                if(mat[i][N]>=k && i!=x && mat[x][i]==0)
                {   k = mat[i][N];
                    y = i;
                    flag = 1;
                }
            }
            if(flag == 0)
            {
                k--;
                goto restart;
            }
            z[zs] = y;
            zs++;
                    for(k=(mat[x][N]-1);k>=0;k--)
                    {  int flag = 1;
                        for(s=0;s<N;s++)
                        {
                            if(mat[x][s]==cost[k] || mat[s][y] == cost[k])
                            {
                            	flag = 0;
                                break;
                            }
                        }
                        if(flag != 0)
                        {
                            break;
                        }
                    }

                    mat[x][y] = cost[k];
                    mat[y][x] = cost[k];
                    mat[x][N]--;
                    mat[y][N]--;
                    ans += cost[k];
                    tot--;
//                    return y;



}
