#include<stdio.h>
#include<conio.h>

main()

{


int j,a,x=1,n;
printf("Enter a no.");
scanf("%d",&n);

int ARR[n][n];


for(j=0;j<n;j++)
{
    if(j%2 == 0)
    {
        for(a=0;j-a>=0;a++)
        {
            ARR[j-a][a] = x;
       x++;}}
        else
    {
        for(a=0;j-a>=0;a++)
        {
            ARR[a][j-a] = x;
            x++;}}}





for(a=0;a<n;a++)
{
    for(j=n;j>a;j--)
    {
        printf("%d\t",ARR[a][n-j]);
    }
printf("\n");
}
}
