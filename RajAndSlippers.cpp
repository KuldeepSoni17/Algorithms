#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        int N,FSrt,FEnd,P,Q,Rwak,Shopen,RES,i,j=0;
        cin >> N;
        scanf("%d : %d",&P,&Q);
        scanf("%d : %d",&P,&Q);
        Rwak = P*60 + Q;
        scanf("%d : %d",&P,&Q);
        Shopen = P*60 + Q;
        Rwak = max(Rwak,Shopen);
        RES = 23*60;
        cin >> i >> i;
        for(i=0;i<N;i++)
            {scanf("%d : %d",&P,&Q);
            FSrt = P*60 + Q;
            if(FSrt>Rwak)
            {
                RES = 9*60 + 0;
                scanf("%d : %d",&P,&Q);
                continue;
            }
            scanf("%d : %d",&P,&Q);
            FEnd = P*60 + Q;
            if(FEnd<Rwak)
            {
                RES = 9*60 + 0;
                continue;
            }
            else
            {
                min(RES,FEnd);

            }
        }
        cout << i+1 << endl;
        tc--;
    }
}
