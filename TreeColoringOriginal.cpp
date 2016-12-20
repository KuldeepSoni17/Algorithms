#include<algorithm>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,*cost,ans=0,x,y,tot=0,k,s,flag;
        cin >> N;
        cost = new int[N-1];
        int mat[N+1][N+1];

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




        }
{
        /*for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(mat[i][N] != 0)
                {
                if(mat[i][j] == 0)
                {
                    for(x=0;x<N-1;x++)
                    {  int flag = 1;
                        for(y=0;y<N;y++)
                        {
                            if(mat[i][y]==cost[x] || mat[y][j] == cost[x] )
                            {
                    //            cout << mat[y][i] << " "<< y<< " " << i << " " << cost[x] << endl;
                                flag = 0;
                                break;
                            }
                        }
                        if(flag != 0)
                        {
                      //      cout << mat[y][i] << " "<< y<< " " << i  << " "<< cost[x] << endl;
                            break;
                        }
                    }
                    //for(int i=0;i<N;i++)
                      //  {
                        //for(int j=0;j<N+1;j++)
                          //  {
                            //cout << setw(2) <<mat[i][j] << setw(2) << " ";
                            //}
                          //  cout << endl;
                        //}
                        //cout << endl;
         //           cout << i << " " << j << " " << cost[x] << " "  << endl;
                    mat[i][j] = cost[x];
                    mat[j][i] = cost[x];
                    mat[i][N]--;
                    mat[j][N]--;
                    ans += cost[x];
                }
                }
                else
                {
                    break;
                }
            }
        }*/
}
        tc--;
    cout << ans << endl;
    }
}

