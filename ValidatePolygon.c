#include<stdio.h>

int main()
{
int tc,j;
scanf("%d",&tc);
for(j=0;j<tc;j++)
{
    int X,i,flag;
    scanf("%d",&X);
    float Angle[X];

    for(i=0;i<X;i++)
    {
        scanf("%f",&Angle[i]);
    }
    if(Angle[0] == 180 - (float)(360/X))
    {
        flag = 0;
     for(i=0;i<X;i++)
     {
         if(Angle[i] != Angle[0])
         {
             flag = 1;
             break;
         }
     }
     if(flag == 0)
     {
         printf("YES\n");
     }
     else
     {
         printf("NO\n");
     }
    }
    else{printf("NO\n");}

}
    return 0;
}

