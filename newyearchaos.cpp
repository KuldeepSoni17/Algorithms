#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

const int maxN=2e5+5;

int n,a[maxN],ans,T,k;
int bit[maxN];
int invalid;

void del()
{
    for (k=0;k<maxN;k++)
      bit[k]=0;
    ans=0;
    invalid=0;
}

void upd(int x)
{
    for (k=x;k<maxN;k+=(k&(-k)))
        bit[k]++;
}

int get_sum(int x)
{
    int p=0;
    for (k=x;k>0;k-=(k&(-k)))
        p+=bit[k];

        return p;
}

int main()
{
 scanf("%d",&T);
 while (T--)
 {
    del();
    scanf("%d",&n);

    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);

        for (int i=n-1;i>=0;i--)
        {
            if (get_sum(a[i])>2)
                invalid++;

            ans+=get_sum(a[i]);
            upd(a[i]);
         }
       if (invalid>0) printf("Too chaotic\n"); else printf("%d\n",ans);
    }
   return 0;
}
