#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int main()
{
    int tc,q=1;
    cin >> tc;
    while(q<=tc)
    {
        int M;
        cin >> M;
        int ARR[2*M][2*M] = {0},fir[2*M],sec[2*M];
        string str[2*M];
        for(int i=0;i<2*M;i++)
        {
            fir[i] = sec[i] = -1;
        }
        int p = 0;
        for(int i=0;i<M;i++)
        {
            string one,two;
            cin >> one >> two;
            bool flag = false;
            int x,y;
               for(int j=0;j<p;j++)
                {
                if(str[j]==one)
                    {
                        x = j;
                        flag = true;
                        break;
                    }
                }
                if(flag==true)
                {
                    flag = false;
                            for(int j=0;j<p;j++)
                        {
                            if(str[j]==two)
                            {
                                y = j;
                                flag = true;
                                break;
                            }
                        }
                        if(flag==true)
                        ARR[x][y] =  ARR[y][x] = 1;
                        else
                        {
                            str[p++] = two;
                            y = p-1;
                            ARR[x][y] =  ARR[y][x] = 1;
                        }
                }
            else
            {
                str[p++] = one;
                x = p-1;
                flag = false;
                        for(int j=0;j<p;j++)
                        {
                            if(str[j]==two)
                            {
                                y = j;
                                flag = true;
                                break;
                            }
                        }
                        if(flag==true)
                        ARR[x][y] =  ARR[y][x] = 1;
                        else
                        {
                            str[p++] = two;
                            y = p-1;
                            ARR[x][y] =  ARR[y][x] = 1;
                        }
            }


        }
        bool flag = true;
        for(int i=0;i<2*M && flag == true;i++)
        {
            for(int j=0;j<[2*M];j++)
            {if(fir[j]==)}
        }
        if(flag==false)
        cout << "Case #" << q <<": No" << endl;
        else
        cout << "Case #" << q <<": Yes" << endl;
        q++;
        }
    }

