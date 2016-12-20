#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int M,N,*boy,*grl,CNT;
        cin >> M >> N;
        boy = new int[M];
        grl = new int[N];
        for(int i=0;i<M;i++)
        {
            cin >> boy[i];
        }
        for(int i=0;i<N;i++)
        {
            cin >> grl[i];
        }
        if(M>N)
        {
            cout << "NO"<<endl;
        }
        else if(M==N)
        {
        sort(boy,boy+M);
        sort(grl,grl+N);
            for(int i=0;i<M;i++)
            {
                if(boy[i]<grl[i])
                {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        else
        {
        sort(boy,boy+M);
        sort(grl,grl+N);



                int j=0,i;
                CNT = 0;
            for(i=0;i<M;i++)
            {
                for(;j<N;j++)
                {
                    if(boy[i]>=grl[j])
                    {
                        CNT++;
                        j++;
                        break;
                    }
                }
                if(N-(j)<M-(i))
                {
                   break;
                }
            }
            if(N-(j+1)<M-(i+1))
            {
                 cout << "NO" << endl;
            }
            else
            {
                 cout << "YES" << endl;
            }
        }
        tc--;
    }
}
