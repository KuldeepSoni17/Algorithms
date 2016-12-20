#include<stdio.h>
int main()
{
long int N,i,j,temp,count=0;
scanf("%ld",&N);
long int X[N];
for(i=0;i<N;i++)
{
    scanf("%ld",&X[i]);
}
for(i=0;i<N;i++)
{
    for(j=i;j<N;j++)
    {
        if(X[i] > X[j])
        {
            temp = X[i];
            X[i] = X[j];
            X[j] = temp;
        }
    }
}
X[N+1] = -100;
temp = X[0];
for(i=0;i<N+1;i++)
{
if(temp == X[i])
{
    count++;
}
else
{
    printf("%ld %ld\n",temp,count);
    count = 1;
    temp = X[i];
}
}
return 0;
}
