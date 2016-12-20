#include<iostream>
#include<stdlib.h>
#include<bitset>
using namespace std;
int count(int);
        int main()
        {
            int tc;
            cin >> tc;
            while(tc)
            {
                int N,K;
                cin >> N >> K;
                int fnl=0,x;
                char *ptr;
                  for (int i = 0; i < K; i++ )
                {
                    char s[N];
                    cin >> s;
                    x = strtol(s, &ptr, 2);
                    fnl = fnl | x;
                }
                cout << count(fnl);

                    tc--;
            }


        }
            int count (int N)
        {
            int cnt=0;
            while(N!=0)
            {
                N = N & N - 1;
                cnt++;
            }
            return cnt;
        }


